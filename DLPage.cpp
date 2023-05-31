#include "DLPage.h"
#include "ui_DLPage.h"

DLPage::DLPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DLPage)
{
    ui->setupUi(this);
    setWindowTitle(tr("深度学习"));

    // 算法种类
    ui->modelTypesCombo->addItem("YOLOV5");

    // 推理方式种类
    ui->referModeCombo->addItem("OPENCV::DEFAULT");
    ui->referModeCombo->addItem("OPENCV::CUDA");
    ui->referModeCombo->addItem("TensorRT");

    connectSlots();
}

DLPage::~DLPage()
{
    yoloptr = nullptr;
    delete ui;
}

void DLPage::connectSlots()
{
    // clear label btn
    connect(ui->clearLabelsBtn,&QToolButton::clicked,this,[&](){
        ui->labelsCombo->clear();
        appendLog("标签清空成功");
    });

    // choose model btn
    connect(ui->chooseModelBtn,&QToolButton::clicked,this,[&](){
        m_modelPath = QFileDialog::getOpenFileName(this,"open model",".",tr("Model Files (*.onnx)"));
        if(!m_modelPath.isEmpty()){
            ui->chooseModelBtn->setText(m_modelPath);
        }
    });

    // choose images btn
    connect(ui->chooseSourceBtn,&QToolButton::clicked,this,[&](){
        m_sources = QStringList(QFileDialog::getOpenFileNames(this,"open model",".",tr("Image Files (*.png *.jpg *.bmp)")));
        if(!m_sources.isEmpty()){
            ui->chooseSourceBtn->setText(m_sources.join(","));
        }
    });

    // init model btn
    connect(ui->initBtn,&QPushButton::clicked,this,[&](){
        if(m_modelPath.isEmpty()){
            QMessageBox::warning(this,tr("提示"),tr("请选择模型文件"));
            return;
        }

        if(m_sources.isEmpty()){
            QMessageBox::warning(this,tr("提示"),tr("请选择待检测文件"));
            return;
        }

        int labelsCount = ui->labelsCombo->count();
        if(labelsCount == 0){
            QMessageBox::warning(this,tr("提示"),tr("请选择标签名称"));
            return;
        }

        int inputSize = ui->resourceSizeSpinBox->value();

        try{
            appendLog("初始化模型...");
            yoloptr.reset(new MyYolo());
            CNNConfig config;
            config.confThreshold = ui->confSpinBox->value();
            config.inputWidth = inputSize;
            config.inputHeight = inputSize;
            config.numOfClass = ui->labelsCombo->count();
            yoloptr->setConfig(config);

            QString referType = ui->referModeCombo->currentText();
            if(referType != "TensorRT"){ // opencv推理
                cv::dnn::Net net = cv::dnn::readNet(m_modelPath.toStdString());

                if( referType == "OPENCV::DEFAULT"){
                    net.setPreferableBackend(cv::dnn::DNN_BACKEND_DEFAULT);
                    net.setPreferableTarget(cv::dnn::DNN_BACKEND_DEFAULT);
                }else if (referType == "OPENCV::CUDA"){
                    net.setPreferableBackend(cv::dnn::DNN_BACKEND_CUDA);
                    net.setPreferableTarget(cv::dnn::DNN_TARGET_CUDA);
                }
                yoloptr->setNet(net);
                cv::Mat forHot = cv::Mat::zeros(config.inputWidth, config.inputHeight, CV_8UC3);
                std::vector<BoxItem> forHotResult;
                yoloptr->onnxDetect(forHot, forHotResult);
            }else{ // tensorRT推理

            }

            appendLog(QString("初始化模型%1成功，推理模式%2").arg(m_modelPath,ui->referModeCombo->currentText()));
        }catch(const std::exception& e){
            appendLog(QString("初始化模型%1失败，推理模式%2").arg(e.what(),ui->referModeCombo->currentText()));
        }

    });

    // clear init model
    connect(ui->clearInit,&QPushButton::clicked,this,[&](){
        yoloptr = nullptr;

        appendLog(QString("关闭模型%1成功").arg(m_modelPath));
    });

    // start detect
    connect(ui->startBtn,&QPushButton::clicked,this,[&](){
        if(!yoloptr){
            QMessageBox::warning(this,tr("提示"),tr("请初始化模型"));
            return;
        }

        cv::RNG rng(time(0));

        int index = 0;
        for(auto& source:m_sources){
            ++ index;
            TimerLog timerLog(QString("图片%1").arg(index),ui->logPlanText);
            cv::Scalar color(rng.uniform(0,255),rng.uniform(0,255),rng.uniform(0,255));
            try{
                cv::Mat image = cv::imread(source.toStdString());
                cv::Mat outImage = image.clone();
                if(image.data){
                    std::vector<BoxItem> result;
                    yoloptr->onnxDetect(image, result);
                    for(auto& boxItem: result){
                        QString labelConf = QString("%1:%2")
                                                .arg(ui->labelsCombo->itemText(boxItem.label),QString::number(boxItem.conf, 'f', 2));

                        cv::putText(outImage, labelConf.toStdString(),
                                    cv::Point(boxItem.box.x, boxItem.box.y - 20),
                                    cv::FONT_HERSHEY_SIMPLEX, 2, color, 4, cv::LINE_AA);

                        cv::rectangle(outImage, boxItem.box, color, 4, cv::LINE_AA);

                        ui->graphicsView->showImg(outImage);
                    }
                }
            }catch(const std::exception& e){
                appendLog(QString("推理失败：%1").arg(e.what()));
            }
        }
    });
}

void DLPage::appendLog(const QString& str)
{
    ui->logPlanText->appendPlainText(QString("%1:%2")
                                         .arg(QDateTime::currentDateTime().toString("hh:mm:ss"),str));
}

void DLPage::closeEvent(QCloseEvent *e)
{
    yoloptr = nullptr;
    e->accept();
}

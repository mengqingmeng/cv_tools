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
    ui->referModeCombo->addItem("OPENCV::DNN");
    ui->referModeCombo->addItem("TensorRT");

    connectSlots();
}

DLPage::~DLPage()
{
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
        m_sources = QFileDialog::getOpenFileNames(this,"open model",".",tr("Image Files (*.png *.jpg *.bmp)"));
        if(!m_sources.isEmpty()){
            ui->chooseSourceBtn->setText(m_sources.join(","));
        }
    });

    // init model btn
    connect(ui->initBtn,&QPushButton::clicked,this,[&](){

    });

    // start detect
    connect(ui->startBtn,&QPushButton::clicked,this,[&](){

    });
}

void DLPage::appendLog(const QString& str)
{
    ui->logPlanText->appendPlainText(QString("%1:%2")
                                         .arg(QDateTime::currentDateTime().toString("hh:mm:ss.zzz"))
                                         .arg(str));
}

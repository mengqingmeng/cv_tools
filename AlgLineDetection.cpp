#include "AlgLineDetection.h"
#include "ui_AlgLineDetection.h"

AlgLineDetection::AlgLineDetection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlgLineDetection)
{
    ui->setupUi(this);
    ui->cannySobelVal->addItems(sobelValues);
    connectSlots();

    enableInput(LineAlgType::PROBABILITY);
}

AlgLineDetection::~AlgLineDetection()
{
    delete ui;
}

void AlgLineDetection::onPropsChange()
{
    if(m_inImage.empty()){
    }else{
        // 根据参数对图像进行处理，并展示。
        processImg();
    }
}

void AlgLineDetection::connectSlots()
{
    // 选择图像
    connect(ui->chooseBtn,&QPushButton::clicked,this,[&](){
        QString localImgName = ImgUtils::getLocalImgName();
        if(!localImgName.isEmpty()){ // 本地图片路径不为空
            m_inImage = cv::imread(localImgName.toStdString());
            processImg();
        }
    });

    // 检测类型变换
    connect(ui->houghP,&QRadioButton::clicked,this,[&](bool checked){
        enableInput(checked ? LineAlgType::PROBABILITY : LineAlgType::STANDARD);
        processImg();
    });
    connect(ui->standardHough,&QRadioButton::clicked,this,[&](bool checked){
        enableInput(checked ? LineAlgType::STANDARD : LineAlgType::PROBABILITY);
        processImg();
    });

    // 数值发生变化
    connect(ui->cannyThreshold1,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
    connect(ui->cannyThreshold2,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
    connect(ui->cannySobelVal,&QComboBox::currentIndexChanged,this,&AlgLineDetection::onPropsChange);
    connect(ui->cannyL2,&QCheckBox::clicked,this,&AlgLineDetection::onPropsChange);

    connect(ui->lineRho,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
    connect(ui->lineTheta,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
    connect(ui->lineThreshold,&QSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
    connect(ui->lineSrn,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
    connect(ui->lineStn,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
    connect(ui->lineMinTheta,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
    connect(ui->lineMaxTheta,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);

    connect(ui->lineMinLength,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
    connect(ui->lineMaxLineGap,&QDoubleSpinBox::editingFinished,this,&AlgLineDetection::onPropsChange);
}

void AlgLineDetection::processImg()
{
    if(m_inImage.empty()) return;
    m_outImage = m_inImage.clone();
    cv::Mat showImage = m_inImage.clone();

    cv::cvtColor(m_outImage,m_outImage,cv::COLOR_BGR2GRAY);
    // 类型判断
    bool houghP = ui->houghP->isChecked();
    // 边缘检测
    cv::Mat edge;
    cv::Canny(m_outImage,
              edge,
              ui->cannyThreshold1->value(),
              ui->cannyThreshold2->value(),
              ui->cannySobelVal->currentText().toInt(),
              ui->cannyL2->isChecked()
              );
    // 直线检测
    if(houghP){
        std::vector<cv::Vec4i> linesP; // will hold the results of the detection
        HoughLinesP(edge,
                    linesP,
                    ui->lineRho->value(),
                    CV_PI/ui->lineTheta->value(),
                    ui->lineThreshold->value(),
                    ui->lineMinLength->value(),
                    ui->lineMaxLineGap->value()
                    ); // runs the actual detection

        for( size_t i = 0; i < linesP.size(); i++ )
        {
            cv::line( showImage, cv::Point(linesP[i][0], linesP[i][1]),
                     cv::Point( linesP[i][2], linesP[i][3]), cv::Scalar(0,255,0), 1, cv::LINE_AA);
        }
    }else{
        std::vector<cv::Vec2f> lines; // will hold the results of the detection

        double maxTheta = std::max(ui->lineMinTheta->value(),ui->lineMaxTheta->value());
        double minTheta = std::min(ui->lineMinTheta->value(),ui->lineMaxTheta->value());
        HoughLines(edge,
                   lines,
                   ui->lineRho->value(),
                   CV_PI/ui->lineTheta->value(),
                   ui->lineThreshold->value(),
                   ui->lineSrn->value(),
                   ui->lineStn->value(),
                   minTheta * CV_PI,
                   maxTheta * CV_PI
                   ); // runs the actual detection
        for( size_t i = 0; i < lines.size(); i++ )
        {
            float rho = lines[i][0], theta = lines[i][1];
            cv::Point pt1, pt2;
            double a = cos(theta), b = sin(theta);
            double x0 = a*rho, y0 = b*rho;
            pt1.x = cvRound(x0 + 1000*(-b));
            pt1.y = cvRound(y0 + 1000*(a));
            pt2.x = cvRound(x0 - 1000*(-b));
            pt2.y = cvRound(y0 - 1000*(a));
            line(showImage, pt1, pt2, cv::Scalar(0,255,0), 1, cv::LINE_AA);
        }
    }

    ui->imagesViewer->showImages({
        ImageName(m_inImage,tr("原图")),
        ImageName(edge,tr("边缘检测")),
        ImageName(showImage,tr("直线检测"))
    });
}

void AlgLineDetection::enableInput(LineAlgType type)
{
    switch (type) {
    case LineAlgType::STANDARD:
        ui->lineMinLength->setReadOnly(true);
        ui->lineMaxLineGap->setReadOnly(true);

        ui->lineSrn->setReadOnly(false);
        ui->lineStn->setReadOnly(false);
        ui->lineMinTheta->setReadOnly(false);
        ui->lineMaxTheta->setReadOnly(false);
        break;
    case LineAlgType::PROBABILITY:
        ui->lineMinLength->setReadOnly(false);
        ui->lineMaxLineGap->setReadOnly(false);

        ui->lineSrn->setReadOnly(true);
        ui->lineStn->setReadOnly(true);
        ui->lineMinTheta->setReadOnly(true);
        ui->lineMaxTheta->setReadOnly(true);
        break;
    default:
        break;
    }
}

#include "AlgThreshold.h"
#include "ui_AlgThreshold.h"

AlgThreshold::AlgThreshold(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AlgThreshold)
{
    ui->setupUi(this);

    thresholdTypes.insert(std::make_pair("THRESH_BINARY",0));
    thresholdTypes.insert(std::make_pair("THRESH_BINARY_INV",1));
    thresholdTypes.insert(std::make_pair("THRESH_TRUNC",2));
    thresholdTypes.insert(std::make_pair("THRESH_TOZERO",3));
    thresholdTypes.insert(std::make_pair("THRESH_TOZERO_INV",4));

    autoThresholdTypes.insert(std::make_pair("THRESH_OTSU",8));
    autoThresholdTypes.insert(std::make_pair("THRESH_TRIANGLE",16));

    for(auto& thresholdType: thresholdTypes){
        ui->thresholdTypes->addItem(QString::fromStdString(thresholdType.first));
    }

    for(auto& autoThresholdType: autoThresholdTypes){
        ui->autoTypes->addItem(QString::fromStdString(autoThresholdType.first));
    }

    ui->autoTypes->addItem("NONE");
    ui->autoTypes->setCurrentText("NONE");

    connect(ui->optionsCompon,&OptionsComponent::onSelectImages,this,[&](const std::vector<cv::Mat>& images){
        m_images = images;
        processImages();
    });

    connect(ui->thresholdValue,&QSlider::valueChanged,this,&AlgThreshold::processImages);
    connect(ui->maxValue,&QSlider::valueChanged,this,&AlgThreshold::processImages);
    connect(ui->thresholdTypes,&QComboBox::currentIndexChanged,this,&AlgThreshold::processImages);
    connect(ui->autoTypes,&QComboBox::currentIndexChanged,this,&AlgThreshold::processImages);
}

AlgThreshold::~AlgThreshold()
{
    delete ui;
}

void AlgThreshold::processImages()
{
    if(m_images.empty()) return;
    int index = 1;

    std::vector<ImageName> showImages;
    for(const cv::Mat& image : m_images){
        cv::Mat outImage = image.clone();
        auto types = thresholdTypes[ui->thresholdTypes->currentText().toStdString()];

        cv::Mat gray;
        cv::cvtColor(image,gray,cv::COLOR_BGR2GRAY);
        if(ui->autoTypes->currentText() == "NONE"){
            cv::threshold(gray,outImage,ui->thresholdValue->value(),ui->maxValue->value(),types);
        }else{
            int autoType = autoThresholdTypes[ui->autoTypes->currentText().toStdString()];
            cv::threshold(gray,outImage,ui->thresholdValue->value(),ui->maxValue->value(),types | autoType);
        }

        showImages.push_back(ImageName(image,tr("原图_%1").arg(index)));
        showImages.push_back(ImageName(gray,tr("灰度图_%1").arg(index)));
        showImages.push_back(ImageName(outImage,tr("结果图_%1").arg(index)));
        ++index;
    }

    ui->imagesViewer->showImages(showImages);
}

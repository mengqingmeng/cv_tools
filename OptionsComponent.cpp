#include "OptionsComponent.h"
#include "ui_OptionsComponent.h"

OptionsComponent::OptionsComponent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OptionsComponent)
{
    ui->setupUi(this);

    // 选择图像
    connect(ui->openImgBtn,&QPushButton::clicked,this,[&](){
        QString localImgName = ImgUtils::getLocalImgName();
        if(!localImgName.isEmpty()){ // 本地图片路径不为空
            cv::Mat image = cv::imread(localImgName.toStdString());
            emit onSelectImages({image});
        }
    });
}

OptionsComponent::~OptionsComponent()
{
    delete ui;
}

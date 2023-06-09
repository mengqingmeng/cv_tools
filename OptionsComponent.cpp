#include "OptionsComponent.h"
#include "ui_OptionsComponent.h"

OptionsComponent::OptionsComponent(QWidget *parent,bool multiOpen) :
    QWidget(parent),
    ui(new Ui::OptionsComponent),m_multiOpenImages(multiOpen)
{
    ui->setupUi(this);

    // 选择图像
    connect(ui->openImgBtn,&QPushButton::clicked,this,[&](){
        std::vector<cv::Mat> images;

        if(multiOpen){
            QStringList list = ImgUtils::getLocalImgNames();
            for(auto& name : list){
                if(!name.isEmpty()){ // 本地图片路径不为空
                    try{
                        cv::Mat image = cv::imread(name.toStdString());
                        images.push_back(image);
                    }catch(const std::exception& e){
                        qWarning() << "读取图片有误";
                    }

                }
            }
        }else{
            QString localImgName = ImgUtils::getLocalImgName();
            if(!localImgName.isEmpty()){ // 本地图片路径不为空
                try{
                    cv::Mat image = cv::imread(localImgName.toStdString());
                    images.push_back(image);
                }catch(const std::exception& e){
                    qWarning() << "读取图片有误";
                }
            }
        }

        if(images.empty()) return;
        emit onSelectImages(images);
    });
}

OptionsComponent::~OptionsComponent()
{
    delete ui;
}

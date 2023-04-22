#ifndef ALGLINEDETECTION_H
#define ALGLINEDETECTION_H

#include <QWidget>
#include <opencv.hpp>
#include "ImgUtils.h"

namespace Ui {
class AlgLineDetection;
}

enum class LineAlgType{
    STANDARD,PROBABILITY
};

class AlgLineDetection : public QWidget
{
    Q_OBJECT

public:
    explicit AlgLineDetection(QWidget *parent = nullptr);
    ~AlgLineDetection();

public slots:
    // 参数发生变化插槽
    void onPropsChange();

private:
    Ui::AlgLineDetection *ui;
    QStringList sobelValues = {"3","5","7"};
    // 输入图像
    cv::Mat m_inImage,m_outImage;

    // 连接插槽
    void connectSlots();

    // 处理图片
    void processImg();

    // 根据直线检测类型改变页面展示效果
    void enableInput(LineAlgType type);

};

#endif // ALGLINEDETECTION_H

#ifndef IMGUTILS_H
#define IMGUTILS_H
#include <QString>
#include <QObject>
#include <QFileDialog>
#include <opencv.hpp>

class ImgUtils:public QObject
{
    Q_OBJECT;

public:
    const static QString NONE_IMG_MSG;

    // 获取本地图片路径
    static QString getLocalImgName();

    // cv::Mat转成QPixmap
    static QPixmap matToQPixmap(const cv::Mat& mat);

private:
    explicit ImgUtils(QObject *parent = nullptr);
};

#endif // IMGUTILS_H

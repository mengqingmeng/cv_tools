#ifndef IMGUTILS_H
#define IMGUTILS_H
#include <QString>
#include <QObject>
#include <QFileDialog>
#include <opencv.hpp>

struct MouseData
{
    int x,y,blue,green,red,gray;
    MouseData() {x=0;y=0;blue=0;green = 0;red = 0;gray = 0;}
    MouseData(int _x,int _y,int _blue,int _green,int _red,int _gray)
        :x(_x),y(_y),blue(_blue),green(_green),red(_red),gray(_gray){}
    QString toString() const {
        return QString("x:%1  y:%2  blue:%3  green:%4  red:%5  gray:%6")
            .arg(x)
            .arg(y)
            .arg(blue)
            .arg(green)
            .arg(red)
            .arg(gray);
    }
};

struct ImageName{
    cv::Mat image;
    QString name;
    ImageName(){}
    ImageName(cv::Mat _image,QString _name):image(_image),name(_name){}
};

class ImgUtils:public QObject
{
    Q_OBJECT;

public:
    const static QString NONE_IMG_MSG;

    // 获取本地图片路径
    static QString getLocalImgName();

    // cv::Mat转成QPixmap
    static QPixmap matToQPixmap(const cv::Mat& mat);

    // cv::Mat 转QImage
    static QImage matToQImage(const cv::Mat& mat);

    static QString getCurFileName();

private:
    explicit ImgUtils(QObject *parent = nullptr);
};

#endif // IMGUTILS_H

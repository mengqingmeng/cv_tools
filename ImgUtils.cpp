#include "ImgUtils.h"
#include <QObject>

ImgUtils::ImgUtils(QObject* parent):QObject(parent)
{

}

QString ImgUtils::getLocalImgName()
{
    return QFileDialog::getOpenFileName(nullptr,tr("打开图片"),".",tr("图片文件(*.png *.jpg *.jpeg *.bpm)"));
}

QPixmap ImgUtils::matToQPixmap(const cv::Mat &mat)
{
    return QPixmap::fromImage(matToQImage(mat));
}

QImage ImgUtils::matToQImage(const cv::Mat &mat)
{
    // 8-bits unsigned, NO. OF CHANNELS=1
    if(mat.type() == CV_8UC1) {
        QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
        // Set the color table (used to translate colour indexes to qRgb values)
        image.setColorCount(256);
        for(int i = 0; i < 256; ++i)
            image.setColor(i, qRgb(i, i, i));
        // Copy input Mat
        uchar *pSrc = mat.data;
        for(int row = 0; row < mat.rows; ++row) {
            uchar *pDest = image.scanLine(row);
            memcpy(pDest, pSrc, mat.cols);
            pSrc += mat.step;
        }
        return image;
    }
    // 8-bits unsigned, NO. OF CHANNELS=3
    else if(mat.type() == CV_8UC3) {
        // Copy input Mat
        const uchar *pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    else {
        qDebug() << "ERROR: Mat could not be converted to QImage.";
        return QImage();
    }
}

QString ImgUtils::getCurFileName()
{
    QDateTime now_ts = QDateTime::currentDateTime();
    return now_ts.toString("yyyy-MM-dd_HH-mm-ss_zzz");
}

const QString ImgUtils::NONE_IMG_MSG = tr("图像不存在");

#ifndef ALGTHRESHOLD_H
#define ALGTHRESHOLD_H

#include <QWidget>
#include <opencv.hpp>
#include <map>
#include <QComboBox>
#include "ImgUtils.h"

namespace Ui {
class AlgThreshold;
}

class AlgThreshold : public QWidget
{
    Q_OBJECT

public:
    explicit AlgThreshold(QWidget *parent = nullptr);
    ~AlgThreshold();

private:
    Ui::AlgThreshold *ui;

    // threshold types map
    std::map<std::string,int> thresholdTypes;
    // adaptive threshold types map
    std::map<std::string,int> autoThresholdTypes;

    std::vector<cv::Mat> m_images;

public slots:
    // process and show images
    void processImages();
};

#endif // ALGTHRESHOLD_H

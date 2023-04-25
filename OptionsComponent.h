#ifndef OPTIONSCOMPONENT_H
#define OPTIONSCOMPONENT_H

#include <QWidget>
#include "ImgUtils.h"

namespace Ui {
class OptionsComponent;
}

class OptionsComponent : public QWidget
{
    Q_OBJECT

public:
    explicit OptionsComponent(QWidget *parent = nullptr);
    ~OptionsComponent();

signals:
    void onSelectImages(std::vector<cv::Mat> images);

private:
    Ui::OptionsComponent *ui;
};

#endif // OPTIONSCOMPONENT_H

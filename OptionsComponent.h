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
    explicit OptionsComponent(QWidget *parent = nullptr,bool multiOpen = false);
    ~OptionsComponent();

signals:
    void onSelectImages(const std::vector<cv::Mat>& images);

private:
    Ui::OptionsComponent *ui;
    bool m_multiOpenImages;
};

#endif // OPTIONSCOMPONENT_H

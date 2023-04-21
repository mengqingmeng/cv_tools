#ifndef ALGLINEDETECTION_H
#define ALGLINEDETECTION_H

#include <QWidget>

namespace Ui {
class AlgLineDetection;
}

class AlgLineDetection : public QWidget
{
    Q_OBJECT

public:
    explicit AlgLineDetection(QWidget *parent = nullptr);
    ~AlgLineDetection();

private:
    Ui::AlgLineDetection *ui;
    QStringList sobelValues = {"1","3","5","7"};
};

#endif // ALGLINEDETECTION_H

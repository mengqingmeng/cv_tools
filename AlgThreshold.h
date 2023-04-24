#ifndef ALGTHRESHOLD_H
#define ALGTHRESHOLD_H

#include <QWidget>

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
};

#endif // ALGTHRESHOLD_H

#ifndef ALGLINEFIT_H
#define ALGLINEFIT_H

#include <QWidget>

namespace Ui {
class AlgLineFit;
}

class AlgLineFit : public QWidget
{
    Q_OBJECT

public:
    explicit AlgLineFit(QWidget *parent = nullptr);
    ~AlgLineFit();

private:
    Ui::AlgLineFit *ui;
};

#endif // ALGLINEFIT_H

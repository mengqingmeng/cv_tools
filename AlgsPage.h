#ifndef ALGSPAGE_H
#define ALGSPAGE_H

#include <QDialog>

namespace Ui {
class AlgPage;
}

class AlgsPage : public QDialog
{
    Q_OBJECT

public:
    explicit AlgsPage(QWidget *parent = nullptr);
    ~AlgsPage();

private:
    Ui::AlgPage *ui;
};

#endif // ALGSPAGE_H

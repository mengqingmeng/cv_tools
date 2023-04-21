#ifndef ALGSPAGE_H
#define ALGSPAGE_H

#include <QDialog>
#include <QToolBox>
#include <QPushButton>
#include <QListWidget>
#include "AlgLineDetection.h"
#include "AlgLineFit.h"

namespace Ui {
class AlgsPage;
}

class AlgsPage : public QDialog
{
    Q_OBJECT

public:
    explicit AlgsPage(QWidget *parent = nullptr);
    ~AlgsPage();

private:
    Ui::AlgsPage *ui;
    QStringList objectDetectionNames;
    AlgLineDetection* algLineDetection;
    AlgLineFit* algLineFit;

    // 初始化算法页面
    void initAlgsPage();
};

#endif // ALGSPAGE_H

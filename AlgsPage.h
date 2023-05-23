#ifndef ALGSPAGE_H
#define ALGSPAGE_H

#include <QDialog>
#include <QToolBox>
#include <QPushButton>
#include <QListWidget>
#include "AlgLineDetection.h"
#include "AlgLineFit.h"
#include "AlgThreshold.h"

namespace Ui {
class AlgsPage;
}
/// 算法
class AlgsPage : public QDialog
{
    Q_OBJECT

public:
    explicit AlgsPage(QWidget *parent = nullptr);
    ~AlgsPage();

private:
    Ui::AlgsPage *ui;
    QStringList baseOperateNames; // 基础操作名称
    QStringList objectDetectionNames; // 目标检测算法名称
    QStringList allNames;
    AlgThreshold* algThreshold;
    AlgLineDetection* algLineDetection;
    AlgLineFit* algLineFit;

    // 初始化算法页面
    void initAlgsPage();
};

#endif // ALGSPAGE_H

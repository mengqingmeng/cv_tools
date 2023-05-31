#ifndef DLPAGE_H
#define DLPAGE_H

#include <QDialog>
#include <QFileDialog>
#include <QDateTime>
#include <myYolo.h>
#include <QMessageBox>
#include "TimerLog.h"

namespace Ui {
class DLPage;
}

class DLPage : public QDialog
{
    Q_OBJECT

public:
    explicit DLPage(QWidget *parent = nullptr);
    ~DLPage();

private:
    Ui::DLPage *ui;
    // 模型路径
    QString m_modelPath;
    // 待检测文件
    QStringList m_sources;

    // 连接信号槽
    void connectSlots();

    // 向文本框中新增日志
    void appendLog(const QString& str);

    unique_ptr<MyYolo> yoloptr = nullptr;

protected:
    void closeEvent(QCloseEvent* e) override;
};

#endif // DLPAGE_H

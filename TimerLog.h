#pragma once
#include <iostream>
#include <QElapsedTimer>
#include <QString>
#include <QDebug>
#include <QPlainTextEdit>

class TimerLog
{
public:
    TimerLog(QString message = "",QPlainTextEdit* planText = nullptr);
	~TimerLog();

private:
    QString m_message;
    QElapsedTimer m_timer;
    QPlainTextEdit* m_planText;
};


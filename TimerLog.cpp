#include "TimerLog.h"

TimerLog::TimerLog(QString message,QPlainTextEdit* planText):m_message(message),m_planText(planText)
{
    m_timer.start();
}

TimerLog::~TimerLog()
{
    QString content = QString("%1耗时%2ms")
                          .arg(m_message)
                          .arg(m_timer.elapsed());

    if(m_planText)
        m_planText->appendPlainText(content);
}

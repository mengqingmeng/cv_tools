/********************************************************************************
** Form generated from reading UI file 'AlgLineFit.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGLINEFIT_H
#define UI_ALGLINEFIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlgLineFit
{
public:
    QLabel *label;

    void setupUi(QWidget *AlgLineFit)
    {
        if (AlgLineFit->objectName().isEmpty())
            AlgLineFit->setObjectName("AlgLineFit");
        AlgLineFit->resize(400, 300);
        label = new QLabel(AlgLineFit);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 110, 121, 31));

        retranslateUi(AlgLineFit);

        QMetaObject::connectSlotsByName(AlgLineFit);
    } // setupUi

    void retranslateUi(QWidget *AlgLineFit)
    {
        AlgLineFit->setWindowTitle(QCoreApplication::translate("AlgLineFit", "Form", nullptr));
        label->setText(QCoreApplication::translate("AlgLineFit", "\347\233\264\347\272\277\346\213\237\345\220\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlgLineFit: public Ui_AlgLineFit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGLINEFIT_H

/********************************************************************************
** Form generated from reading UI file 'OptionsComponent.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSCOMPONENT_H
#define UI_OPTIONSCOMPONENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsComponent
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *openImgBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *OptionsComponent)
    {
        if (OptionsComponent->objectName().isEmpty())
            OptionsComponent->setObjectName("OptionsComponent");
        OptionsComponent->resize(400, 300);
        horizontalLayout = new QHBoxLayout(OptionsComponent);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        groupBox = new QGroupBox(OptionsComponent);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        openImgBtn = new QPushButton(groupBox);
        openImgBtn->setObjectName("openImgBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(openImgBtn->sizePolicy().hasHeightForWidth());
        openImgBtn->setSizePolicy(sizePolicy1);
        openImgBtn->setMinimumSize(QSize(0, 60));
        openImgBtn->setMaximumSize(QSize(16777215, 80));
        openImgBtn->setFocusPolicy(Qt::NoFocus);

        verticalLayout->addWidget(openImgBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(groupBox);


        retranslateUi(OptionsComponent);

        QMetaObject::connectSlotsByName(OptionsComponent);
    } // setupUi

    void retranslateUi(QWidget *OptionsComponent)
    {
        OptionsComponent->setWindowTitle(QCoreApplication::translate("OptionsComponent", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OptionsComponent", "\346\223\215\344\275\234", nullptr));
        openImgBtn->setText(QCoreApplication::translate("OptionsComponent", "\346\211\223\345\274\200\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsComponent: public Ui_OptionsComponent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSCOMPONENT_H

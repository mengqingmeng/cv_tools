/********************************************************************************
** Form generated from reading UI file 'AlgThreshold.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGTHRESHOLD_H
#define UI_ALGTHRESHOLD_H

#include <OptionsComponent.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <imagesviewer.h>

QT_BEGIN_NAMESPACE

class Ui_AlgThreshold
{
public:
    QHBoxLayout *horizontalLayout;
    ImagesViewer *imagesViewer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSpinBox *maxValue;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QComboBox *thresholdTypes;
    QSpinBox *thresholdValue;
    QLabel *label_2;
    QComboBox *autoTypes;
    OptionsComponent *optionsCompon;

    void setupUi(QWidget *AlgThreshold)
    {
        if (AlgThreshold->objectName().isEmpty())
            AlgThreshold->setObjectName("AlgThreshold");
        AlgThreshold->resize(645, 485);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AlgThreshold->sizePolicy().hasHeightForWidth());
        AlgThreshold->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(AlgThreshold);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 2, 2, -1);
        imagesViewer = new ImagesViewer(AlgThreshold);
        imagesViewer->setObjectName("imagesViewer");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imagesViewer->sizePolicy().hasHeightForWidth());
        imagesViewer->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(imagesViewer);

        widget_2 = new QWidget(AlgThreshold);
        widget_2->setObjectName("widget_2");
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        maxValue = new QSpinBox(groupBox);
        maxValue->setObjectName("maxValue");
        maxValue->setMaximum(255);
        maxValue->setValue(255);

        gridLayout->addWidget(maxValue, 1, 1, 1, 2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        thresholdTypes = new QComboBox(groupBox);
        thresholdTypes->setObjectName("thresholdTypes");

        gridLayout->addWidget(thresholdTypes, 2, 1, 1, 2);

        thresholdValue = new QSpinBox(groupBox);
        thresholdValue->setObjectName("thresholdValue");
        thresholdValue->setMaximum(255);
        thresholdValue->setValue(125);

        gridLayout->addWidget(thresholdValue, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        autoTypes = new QComboBox(groupBox);
        autoTypes->setObjectName("autoTypes");

        gridLayout->addWidget(autoTypes, 3, 1, 1, 2);


        verticalLayout->addWidget(groupBox);

        optionsCompon = new OptionsComponent(widget_2);
        optionsCompon->setObjectName("optionsCompon");

        verticalLayout->addWidget(optionsCompon);


        horizontalLayout->addWidget(widget_2);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(AlgThreshold);

        QMetaObject::connectSlotsByName(AlgThreshold);
    } // setupUi

    void retranslateUi(QWidget *AlgThreshold)
    {
        AlgThreshold->setWindowTitle(QCoreApplication::translate("AlgThreshold", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AlgThreshold", "\345\217\202\346\225\260", nullptr));
        label_3->setText(QCoreApplication::translate("AlgThreshold", "\347\261\273\345\236\213", nullptr));
        label_4->setText(QCoreApplication::translate("AlgThreshold", "\350\207\252\345\212\250\347\261\273\345\236\213", nullptr));
        label->setText(QCoreApplication::translate("AlgThreshold", "\351\230\210\345\200\274", nullptr));
        label_2->setText(QCoreApplication::translate("AlgThreshold", "\346\234\200\345\244\247\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlgThreshold: public Ui_AlgThreshold {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGTHRESHOLD_H

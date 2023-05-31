/********************************************************************************
** Form generated from reading UI file 'AlgLineDetection.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGLINEDETECTION_H
#define UI_ALGLINEDETECTION_H

#include <OptionsComponent.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <imagesviewer.h>

QT_BEGIN_NAMESPACE

class Ui_AlgLineDetection
{
public:
    QHBoxLayout *horizontalLayout;
    ImagesViewer *imagesViewer;
    QVBoxLayout *verticalLayout_2;
    QWidget *propsWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_3;
    QDoubleSpinBox *lineMaxTheta;
    QLabel *label_12;
    QDoubleSpinBox *lineMinTheta;
    QDoubleSpinBox *lineRho;
    QDoubleSpinBox *lineTheta;
    QLabel *label_10;
    QDoubleSpinBox *lineStn;
    QSpinBox *lineThreshold;
    QDoubleSpinBox *lineSrn;
    QDoubleSpinBox *lineMinLength;
    QRadioButton *standardHough;
    QLabel *label;
    QLabel *label_14;
    QDoubleSpinBox *lineMaxLineGap;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_4;
    QCheckBox *cannyL2;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_13;
    QRadioButton *houghP;
    QLabel *label_15;
    QDoubleSpinBox *cannyThreshold2;
    QLabel *label_11;
    QComboBox *cannySobelVal;
    QDoubleSpinBox *cannyThreshold1;
    OptionsComponent *optionsComponent;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AlgLineDetection)
    {
        if (AlgLineDetection->objectName().isEmpty())
            AlgLineDetection->setObjectName("AlgLineDetection");
        AlgLineDetection->resize(820, 764);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AlgLineDetection->sizePolicy().hasHeightForWidth());
        AlgLineDetection->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(AlgLineDetection);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        imagesViewer = new ImagesViewer(AlgLineDetection);
        imagesViewer->setObjectName("imagesViewer");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imagesViewer->sizePolicy().hasHeightForWidth());
        imagesViewer->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(imagesViewer);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);

        horizontalLayout->addWidget(imagesViewer);

        propsWidget = new QWidget(AlgLineDetection);
        propsWidget->setObjectName("propsWidget");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(propsWidget->sizePolicy().hasHeightForWidth());
        propsWidget->setSizePolicy(sizePolicy2);
        verticalLayout = new QVBoxLayout(propsWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        groupBox = new QGroupBox(propsWidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy3);
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 1, 4, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 5, 0, 1, 2);

        lineMaxTheta = new QDoubleSpinBox(groupBox);
        lineMaxTheta->setObjectName("lineMaxTheta");
        sizePolicy1.setHeightForWidth(lineMaxTheta->sizePolicy().hasHeightForWidth());
        lineMaxTheta->setSizePolicy(sizePolicy1);
        lineMaxTheta->setMinimum(0.000000000000000);
        lineMaxTheta->setMaximum(1.000000000000000);
        lineMaxTheta->setValue(1.000000000000000);

        gridLayout_2->addWidget(lineMaxTheta, 8, 4, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");

        gridLayout_2->addWidget(label_12, 5, 3, 1, 1);

        lineMinTheta = new QDoubleSpinBox(groupBox);
        lineMinTheta->setObjectName("lineMinTheta");
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineMinTheta->sizePolicy().hasHeightForWidth());
        lineMinTheta->setSizePolicy(sizePolicy4);
        lineMinTheta->setMinimum(0.000000000000000);
        lineMinTheta->setMaximum(1.000000000000000);

        gridLayout_2->addWidget(lineMinTheta, 8, 3, 1, 1);

        lineRho = new QDoubleSpinBox(groupBox);
        lineRho->setObjectName("lineRho");
        sizePolicy1.setHeightForWidth(lineRho->sizePolicy().hasHeightForWidth());
        lineRho->setSizePolicy(sizePolicy1);
        lineRho->setMaximum(999.990000000000009);
        lineRho->setValue(1.000000000000000);

        gridLayout_2->addWidget(lineRho, 6, 2, 1, 1);

        lineTheta = new QDoubleSpinBox(groupBox);
        lineTheta->setObjectName("lineTheta");
        sizePolicy1.setHeightForWidth(lineTheta->sizePolicy().hasHeightForWidth());
        lineTheta->setSizePolicy(sizePolicy1);
        lineTheta->setMinimum(0.010000000000000);
        lineTheta->setMaximum(360.000000000000000);
        lineTheta->setValue(180.000000000000000);

        gridLayout_2->addWidget(lineTheta, 6, 3, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_10, 7, 2, 1, 1);

        lineStn = new QDoubleSpinBox(groupBox);
        lineStn->setObjectName("lineStn");
        sizePolicy1.setHeightForWidth(lineStn->sizePolicy().hasHeightForWidth());
        lineStn->setSizePolicy(sizePolicy1);
        lineStn->setMaximum(999.000000000000000);

        gridLayout_2->addWidget(lineStn, 8, 2, 1, 1);

        lineThreshold = new QSpinBox(groupBox);
        lineThreshold->setObjectName("lineThreshold");
        sizePolicy1.setHeightForWidth(lineThreshold->sizePolicy().hasHeightForWidth());
        lineThreshold->setSizePolicy(sizePolicy1);
        lineThreshold->setMaximum(9999);
        lineThreshold->setValue(100);

        gridLayout_2->addWidget(lineThreshold, 6, 4, 1, 1);

        lineSrn = new QDoubleSpinBox(groupBox);
        lineSrn->setObjectName("lineSrn");
        sizePolicy1.setHeightForWidth(lineSrn->sizePolicy().hasHeightForWidth());
        lineSrn->setSizePolicy(sizePolicy1);
        lineSrn->setMaximum(9999.000000000000000);

        gridLayout_2->addWidget(lineSrn, 6, 5, 1, 1);

        lineMinLength = new QDoubleSpinBox(groupBox);
        lineMinLength->setObjectName("lineMinLength");
        sizePolicy4.setHeightForWidth(lineMinLength->sizePolicy().hasHeightForWidth());
        lineMinLength->setSizePolicy(sizePolicy4);
        lineMinLength->setMaximum(999999.000000000000000);
        lineMinLength->setValue(10.000000000000000);

        gridLayout_2->addWidget(lineMinLength, 10, 2, 1, 1);

        standardHough = new QRadioButton(groupBox);
        standardHough->setObjectName("standardHough");
        sizePolicy1.setHeightForWidth(standardHough->sizePolicy().hasHeightForWidth());
        standardHough->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(standardHough, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_14, 9, 2, 1, 1);

        lineMaxLineGap = new QDoubleSpinBox(groupBox);
        lineMaxLineGap->setObjectName("lineMaxLineGap");
        sizePolicy1.setHeightForWidth(lineMaxLineGap->sizePolicy().hasHeightForWidth());
        lineMaxLineGap->setSizePolicy(sizePolicy1);
        lineMaxLineGap->setMaximum(999999.000000000000000);
        lineMaxLineGap->setValue(10.000000000000000);

        gridLayout_2->addWidget(lineMaxLineGap, 10, 3, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_7, 5, 4, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_9, 5, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);

        cannyL2 = new QCheckBox(groupBox);
        cannyL2->setObjectName("cannyL2");
        sizePolicy1.setHeightForWidth(cannyL2->sizePolicy().hasHeightForWidth());
        cannyL2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(cannyL2, 2, 5, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_5, 1, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_8, 7, 4, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");

        gridLayout_2->addWidget(label_13, 7, 3, 1, 1);

        houghP = new QRadioButton(groupBox);
        houghP->setObjectName("houghP");
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(houghP->sizePolicy().hasHeightForWidth());
        houghP->setSizePolicy(sizePolicy5);
        houghP->setChecked(true);

        gridLayout_2->addWidget(houghP, 0, 3, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");

        gridLayout_2->addWidget(label_15, 9, 3, 1, 1);

        cannyThreshold2 = new QDoubleSpinBox(groupBox);
        cannyThreshold2->setObjectName("cannyThreshold2");
        sizePolicy1.setHeightForWidth(cannyThreshold2->sizePolicy().hasHeightForWidth());
        cannyThreshold2->setSizePolicy(sizePolicy1);
        cannyThreshold2->setMaximum(255.000000000000000);
        cannyThreshold2->setValue(100.000000000000000);

        gridLayout_2->addWidget(cannyThreshold2, 2, 3, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 5, 5, 1, 1);

        cannySobelVal = new QComboBox(groupBox);
        cannySobelVal->setObjectName("cannySobelVal");
        sizePolicy1.setHeightForWidth(cannySobelVal->sizePolicy().hasHeightForWidth());
        cannySobelVal->setSizePolicy(sizePolicy1);
        cannySobelVal->setEditable(false);
        cannySobelVal->setMaxVisibleItems(4);

        gridLayout_2->addWidget(cannySobelVal, 2, 4, 1, 1);

        cannyThreshold1 = new QDoubleSpinBox(groupBox);
        cannyThreshold1->setObjectName("cannyThreshold1");
        sizePolicy1.setHeightForWidth(cannyThreshold1->sizePolicy().hasHeightForWidth());
        cannyThreshold1->setSizePolicy(sizePolicy1);
        cannyThreshold1->setMaximum(255.000000000000000);
        cannyThreshold1->setValue(100.000000000000000);

        gridLayout_2->addWidget(cannyThreshold1, 2, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        optionsComponent = new OptionsComponent(propsWidget);
        optionsComponent->setObjectName("optionsComponent");

        verticalLayout->addWidget(optionsComponent);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(propsWidget);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(AlgLineDetection);

        cannySobelVal->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AlgLineDetection);
    } // setupUi

    void retranslateUi(QWidget *AlgLineDetection)
    {
        AlgLineDetection->setWindowTitle(QCoreApplication::translate("AlgLineDetection", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AlgLineDetection", "\345\217\202\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("AlgLineDetection", "Canny\350\276\271\347\274\230\346\217\220\345\217\226\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("AlgLineDetection", "Sobel\347\233\264\345\276\204", nullptr));
        label_3->setText(QCoreApplication::translate("AlgLineDetection", "\347\233\264\347\272\277\346\243\200\346\265\213\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        lineMaxTheta->setToolTip(QCoreApplication::translate("AlgLineDetection", "\346\243\200\346\265\213\347\233\264\347\272\277\347\232\204\346\234\200\345\244\247\345\274\247\345\272\246\357\274\210CV_PI * \346\255\244\345\200\274\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineMaxTheta->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\346\243\200\346\265\213\347\233\264\347\272\277\347\232\204\346\234\200\345\244\247\345\274\247\345\272\246\357\274\210CV_PI * \346\255\244\345\200\274\357\274\211", nullptr));
#endif // QT_CONFIG(statustip)
        label_12->setText(QCoreApplication::translate("AlgLineDetection", "\350\247\222\345\272\246\345\210\206\350\276\250\347\216\207", nullptr));
#if QT_CONFIG(tooltip)
        lineMinTheta->setToolTip(QCoreApplication::translate("AlgLineDetection", "\346\243\200\346\265\213\347\233\264\347\272\277\347\232\204\346\234\200\345\260\217\345\274\247\345\272\246\357\274\210CV_PI * \346\255\244\345\200\274\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineMinTheta->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\346\243\200\346\265\213\347\233\264\347\272\277\347\232\204\346\234\200\345\260\217\345\274\247\345\272\246\357\274\210CV_PI * \346\255\244\345\200\274\357\274\211", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        lineRho->setToolTip(QCoreApplication::translate("AlgLineDetection", "\344\273\245\345\203\217\347\264\240\344\270\272\345\215\225\344\275\215\347\232\204\350\267\235\347\246\273\345\210\206\350\276\250\347\216\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineRho->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\344\273\245\345\203\217\347\264\240\344\270\272\345\215\225\344\275\215\347\232\204\350\267\235\347\246\273\345\210\206\350\276\250\347\216\207", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        lineTheta->setToolTip(QCoreApplication::translate("AlgLineDetection", "\344\273\245\345\274\247\345\272\246\344\270\272\345\215\225\344\275\215\347\232\204\350\247\222\345\272\246\345\210\206\350\276\250\347\216\207\357\274\210CV_PI / \346\255\244\345\200\274\357\274\211", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineTheta->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\344\273\245\345\274\247\345\272\246\344\270\272\345\215\225\344\275\215\347\232\204\350\247\222\345\272\246\345\210\206\350\276\250\347\216\207\357\274\210CV_PI / \346\255\244\345\200\274\357\274\211", nullptr));
#endif // QT_CONFIG(statustip)
        label_10->setText(QCoreApplication::translate("AlgLineDetection", "\350\247\222\345\272\246\345\210\206\350\276\250\347\216\207\351\231\244\346\225\260", nullptr));
#if QT_CONFIG(tooltip)
        lineStn->setToolTip(QCoreApplication::translate("AlgLineDetection", "\350\247\222\345\272\246\345\210\206\350\276\250\347\216\207\347\232\204\351\231\244\346\225\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineStn->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\350\247\222\345\272\246\345\210\206\350\276\250\347\216\207\347\232\204\351\231\244\346\225\260", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        lineThreshold->setToolTip(QCoreApplication::translate("AlgLineDetection", "\347\264\257\345\212\240\345\231\250\351\230\210\345\200\274", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineThreshold->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\347\264\257\345\212\240\345\231\250\351\230\210\345\200\274", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        lineSrn->setToolTip(QCoreApplication::translate("AlgLineDetection", "\350\267\235\347\246\273\345\210\206\350\276\250\347\216\207\347\232\204\351\231\244\346\225\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineSrn->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\350\267\235\347\246\273\345\210\206\350\276\250\347\216\207\347\232\204\351\231\244\346\225\260", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(tooltip)
        lineMinLength->setToolTip(QCoreApplication::translate("AlgLineDetection", "\347\233\264\347\272\277\346\234\200\345\260\217\351\225\277\345\272\246", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineMinLength->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\347\233\264\347\272\277\346\234\200\345\260\217\351\225\277\345\272\246", nullptr));
#endif // QT_CONFIG(statustip)
        standardHough->setText(QCoreApplication::translate("AlgLineDetection", "\345\244\232\345\260\272\345\272\246\351\234\215\345\244\253\347\233\264\347\272\277", nullptr));
        label->setText(QCoreApplication::translate("AlgLineDetection", "\346\243\200\346\265\213\347\261\273\345\236\213\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("AlgLineDetection", "\347\233\264\347\272\277\346\234\200\345\260\217\351\225\277\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        lineMaxLineGap->setToolTip(QCoreApplication::translate("AlgLineDetection", "\345\220\214\344\270\200\347\233\264\347\272\277\344\270\212\344\270\244\344\270\252\347\202\271\344\271\213\351\227\264\347\232\204\346\234\200\345\244\247\351\227\264\351\232\231", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        lineMaxLineGap->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\345\220\214\344\270\200\347\233\264\347\272\277\344\270\212\344\270\244\344\270\252\347\202\271\344\271\213\351\227\264\347\232\204\346\234\200\345\244\247\351\227\264\351\232\231", nullptr));
#endif // QT_CONFIG(statustip)
        label_7->setText(QCoreApplication::translate("AlgLineDetection", "\347\264\257\345\212\240\345\231\250\351\230\210\345\200\274", nullptr));
        label_9->setText(QCoreApplication::translate("AlgLineDetection", "\350\267\235\347\246\273\345\210\206\350\276\250\347\216\207", nullptr));
        label_4->setText(QCoreApplication::translate("AlgLineDetection", "\345\274\272\350\276\271\347\274\230\351\230\210\345\200\274", nullptr));
#if QT_CONFIG(statustip)
        cannyL2->setStatusTip(QCoreApplication::translate("AlgLineDetection", "L2\346\242\257\345\272\246", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        cannyL2->setWhatsThis(QCoreApplication::translate("AlgLineDetection", "L2\346\242\257\345\272\246", nullptr));
#endif // QT_CONFIG(whatsthis)
        cannyL2->setText(QCoreApplication::translate("AlgLineDetection", "L2\346\242\257\345\272\246", nullptr));
        label_5->setText(QCoreApplication::translate("AlgLineDetection", "\345\274\261\350\276\271\347\274\230\351\230\210\345\200\274", nullptr));
        label_8->setText(QCoreApplication::translate("AlgLineDetection", "\347\233\264\347\272\277\346\234\200\345\244\247\345\274\247\345\272\246", nullptr));
        label_13->setText(QCoreApplication::translate("AlgLineDetection", "\347\233\264\347\272\277\346\234\200\345\260\217\345\274\247\345\272\246", nullptr));
        houghP->setText(QCoreApplication::translate("AlgLineDetection", "\346\246\202\347\216\207\351\234\215\345\244\253\347\233\264\347\272\277", nullptr));
        label_15->setText(QCoreApplication::translate("AlgLineDetection", "\344\270\244\347\202\271\344\271\213\351\227\264\346\234\200\345\244\247\351\227\264\351\232\231", nullptr));
#if QT_CONFIG(tooltip)
        cannyThreshold2->setToolTip(QCoreApplication::translate("AlgLineDetection", "\345\274\261\350\276\271\347\274\230\351\230\210\345\200\274", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cannyThreshold2->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\345\274\261\350\276\271\347\274\230\351\230\210\345\200\274", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        cannyThreshold2->setWhatsThis(QCoreApplication::translate("AlgLineDetection", "\345\274\261\350\276\271\347\274\230\351\230\210\345\200\274", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_11->setText(QCoreApplication::translate("AlgLineDetection", "\350\267\235\347\246\273\345\210\206\350\276\250\347\216\207\351\231\244\346\225\260", nullptr));
#if QT_CONFIG(tooltip)
        cannySobelVal->setToolTip(QCoreApplication::translate("AlgLineDetection", "Sobel\347\256\227\345\255\220\347\233\264\345\276\204", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cannySobelVal->setStatusTip(QCoreApplication::translate("AlgLineDetection", "Sobel\347\256\227\345\255\220\347\233\264\345\276\204", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        cannySobelVal->setWhatsThis(QCoreApplication::translate("AlgLineDetection", "Sobel\347\256\227\345\255\220\347\233\264\345\276\204", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        cannyThreshold1->setToolTip(QCoreApplication::translate("AlgLineDetection", "\345\274\272\350\276\271\347\274\230\351\230\210\345\200\274", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        cannyThreshold1->setStatusTip(QCoreApplication::translate("AlgLineDetection", "\345\274\272\350\276\271\347\274\230\351\230\210\345\200\274", nullptr));
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        cannyThreshold1->setWhatsThis(QCoreApplication::translate("AlgLineDetection", "\345\274\272\350\276\271\347\274\230\351\230\210\345\200\274", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class AlgLineDetection: public Ui_AlgLineDetection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGLINEDETECTION_H

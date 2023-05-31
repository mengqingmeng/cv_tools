#pragma once
/********************************************************************************
** Form generated from reading UI file ''
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#include <QWGraphicsView.h>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DLPage
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *modelStackPage;
    QHBoxLayout *horizontalLayout_2;
    QWGraphicsView *graphicsView;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPlainTextEdit *logPlanText;
    QPushButton *initBtn;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label;
    QToolButton *chooseModelBtn;
    QLabel *label_2;
    QComboBox *labelsCombo;
    QPushButton *startBtn;
    QToolButton *clearInit;
    QComboBox *referModeCombo;
    QLabel *label_6;
    QComboBox *modelTypesCombo;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_3;
    QPushButton *chooseSourceBtn;
    QDoubleSpinBox *confSpinBox;
    QToolButton *clearLabelsBtn;
    QLabel *label_9;
    QSpinBox *resourceSizeSpinBox;

    void setupUi(QDialog *DLPage)
    {
        if (DLPage->objectName().isEmpty())
            DLPage->setObjectName("DLPage");
        DLPage->resize(694, 455);
        horizontalLayout = new QHBoxLayout(DLPage);
        horizontalLayout->setObjectName("horizontalLayout");
        modelStackPage = new QWidget(DLPage);
        modelStackPage->setObjectName("modelStackPage");
        horizontalLayout_2 = new QHBoxLayout(modelStackPage);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QWGraphicsView(modelStackPage);
        graphicsView->setObjectName("graphicsView");

        horizontalLayout_2->addWidget(graphicsView);

        widget = new QWidget(modelStackPage);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(280, 16777215));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(8);
        logPlanText = new QPlainTextEdit(widget);
        logPlanText->setObjectName("logPlanText");
        logPlanText->setLineWrapMode(QPlainTextEdit::WidgetWidth);
        logPlanText->setReadOnly(true);
        logPlanText->setMaximumBlockCount(100);

        gridLayout->addWidget(logPlanText, 10, 1, 1, 1);

        initBtn = new QPushButton(widget);
        initBtn->setObjectName("initBtn");
        initBtn->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(initBtn, 7, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label_7, 10, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 2, 0, 1, 1);

        chooseModelBtn = new QToolButton(widget);
        chooseModelBtn->setObjectName("chooseModelBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chooseModelBtn->sizePolicy().hasHeightForWidth());
        chooseModelBtn->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(chooseModelBtn, 2, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        labelsCombo = new QComboBox(widget);
        labelsCombo->setObjectName("labelsCombo");
        labelsCombo->setFocusPolicy(Qt::WheelFocus);
        labelsCombo->setEditable(true);
        labelsCombo->setDuplicatesEnabled(false);

        gridLayout->addWidget(labelsCombo, 3, 1, 1, 1);

        startBtn = new QPushButton(widget);
        startBtn->setObjectName("startBtn");
        startBtn->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(startBtn, 9, 1, 1, 1);

        clearInit = new QToolButton(widget);
        clearInit->setObjectName("clearInit");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/clear-l.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearInit->setIcon(icon);

        gridLayout->addWidget(clearInit, 7, 2, 1, 1);

        referModeCombo = new QComboBox(widget);
        referModeCombo->setObjectName("referModeCombo");

        gridLayout->addWidget(referModeCombo, 1, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        modelTypesCombo = new QComboBox(widget);
        modelTypesCombo->setObjectName("modelTypesCombo");

        gridLayout->addWidget(modelTypesCombo, 0, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        chooseSourceBtn = new QPushButton(widget);
        chooseSourceBtn->setObjectName("chooseSourceBtn");
        chooseSourceBtn->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(chooseSourceBtn, 4, 1, 1, 1);

        confSpinBox = new QDoubleSpinBox(widget);
        confSpinBox->setObjectName("confSpinBox");
        confSpinBox->setMinimum(0.010000000000000);
        confSpinBox->setMaximum(1.000000000000000);
        confSpinBox->setSingleStep(0.100000000000000);
        confSpinBox->setValue(0.250000000000000);

        gridLayout->addWidget(confSpinBox, 6, 1, 1, 1);

        clearLabelsBtn = new QToolButton(widget);
        clearLabelsBtn->setObjectName("clearLabelsBtn");
        clearLabelsBtn->setIcon(icon);

        gridLayout->addWidget(clearLabelsBtn, 3, 2, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 5, 0, 1, 1);

        resourceSizeSpinBox = new QSpinBox(widget);
        resourceSizeSpinBox->setObjectName("spinBox");
        resourceSizeSpinBox->setMinimum(1);
        resourceSizeSpinBox->setMaximum(99999);
        resourceSizeSpinBox->setValue(640);

        gridLayout->addWidget(resourceSizeSpinBox, 5, 1, 1, 1);


        horizontalLayout_2->addWidget(widget);


        horizontalLayout->addWidget(modelStackPage);


        retranslateUi(DLPage);

        QMetaObject::connectSlotsByName(DLPage);
    } // setupUi

    void retranslateUi(QDialog *DLPage)
    {
        DLPage->setWindowTitle(QCoreApplication::translate("DLPage", "Dialog", nullptr));
        initBtn->setText(QCoreApplication::translate("DLPage", "\345\210\235\345\247\213\345\214\226", nullptr));
        label_4->setText(QCoreApplication::translate("DLPage", "\346\223\215\344\275\234", nullptr));
        label_7->setText(QCoreApplication::translate("DLPage", "\346\227\245\345\277\227", nullptr));
        label->setText(QCoreApplication::translate("DLPage", "\346\250\241\345\236\213", nullptr));
        chooseModelBtn->setText(QCoreApplication::translate("DLPage", "\350\257\267\351\200\211\346\213\251\346\250\241\345\236\213\346\226\207\344\273\266", nullptr));
        label_2->setText(QCoreApplication::translate("DLPage", "\346\240\207\347\255\276", nullptr));
        labelsCombo->setPlaceholderText(QCoreApplication::translate("DLPage", "\350\257\267\350\276\223\345\205\245\346\240\207\347\255\276\345\220\215\347\247\260", nullptr));
        startBtn->setText(QCoreApplication::translate("DLPage", "\345\274\200\345\247\213", nullptr));
        clearInit->setText(QCoreApplication::translate("DLPage", "...", nullptr));
        label_6->setText(QCoreApplication::translate("DLPage", "\346\216\250\347\220\206\346\226\271\345\274\217", nullptr));
        label_8->setText(QCoreApplication::translate("DLPage", "\347\275\256\344\277\241\345\272\246", nullptr));
        label_5->setText(QCoreApplication::translate("DLPage", "\347\256\227\346\263\225", nullptr));
        label_3->setText(QCoreApplication::translate("DLPage", "\346\243\200\346\265\213", nullptr));
        chooseSourceBtn->setText(QCoreApplication::translate("DLPage", "\350\257\267\351\200\211\346\213\251\345\276\205\346\243\200\346\265\213\350\265\204\346\272\220", nullptr));
        clearLabelsBtn->setText(QCoreApplication::translate("DLPage", "...", nullptr));
        label_9->setText(QCoreApplication::translate("DLPage", "\350\265\204\346\272\220\345\260\272\345\257\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DLPage: public Ui_DLPage {};
} // namespace Ui

QT_END_NAMESPACE


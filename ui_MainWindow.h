/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *toolsPageBtn;
    QPushButton *algsPageBtn;
    QPushButton *dlPageBtn;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(682, 436);
        QFont font;
        font.setPointSize(26);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        toolsPageBtn = new QPushButton(centralwidget);
        toolsPageBtn->setObjectName("toolsPageBtn");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolsPageBtn->sizePolicy().hasHeightForWidth());
        toolsPageBtn->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolsPageBtn->setIcon(icon);
        toolsPageBtn->setIconSize(QSize(64, 64));

        gridLayout->addWidget(toolsPageBtn, 0, 1, 1, 1);

        algsPageBtn = new QPushButton(centralwidget);
        algsPageBtn->setObjectName("algsPageBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(algsPageBtn->sizePolicy().hasHeightForWidth());
        algsPageBtn->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/algs.png"), QSize(), QIcon::Normal, QIcon::Off);
        algsPageBtn->setIcon(icon1);
        algsPageBtn->setIconSize(QSize(64, 64));

        gridLayout->addWidget(algsPageBtn, 0, 0, 1, 1);

        dlPageBtn = new QPushButton(centralwidget);
        dlPageBtn->setObjectName("dlPageBtn");
        sizePolicy.setHeightForWidth(dlPageBtn->sizePolicy().hasHeightForWidth());
        dlPageBtn->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/DL.png"), QSize(), QIcon::Normal, QIcon::Off);
        dlPageBtn->setIcon(icon2);
        dlPageBtn->setIconSize(QSize(64, 64));

        gridLayout->addWidget(dlPageBtn, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/flows.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(64, 64));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 682, 39));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toolsPageBtn->setText(QCoreApplication::translate("MainWindow", "\345\267\245\345\205\267", nullptr));
        algsPageBtn->setText(QCoreApplication::translate("MainWindow", "\347\256\227\346\263\225", nullptr));
        dlPageBtn->setText(QCoreApplication::translate("MainWindow", "\346\267\261\345\272\246\345\255\246\344\271\240", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\346\265\201\347\250\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

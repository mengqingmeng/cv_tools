/********************************************************************************
** Form generated from reading UI file 'AlgsPage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGSPAGE_H
#define UI_ALGSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlgsPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolBox *leftMenu;
    QWidget *baseOperate;
    QVBoxLayout *verticalLayout;
    QListWidget *baseOperateItems;
    QWidget *objectDetection;
    QVBoxLayout *verticalLayout_3;
    QListWidget *objectDetectionItems;
    QWidget *featureMatch;
    QStackedWidget *rightMainCon;

    void setupUi(QWidget *AlgsPage)
    {
        if (AlgsPage->objectName().isEmpty())
            AlgsPage->setObjectName("AlgsPage");
        AlgsPage->resize(701, 427);
        verticalLayout_2 = new QVBoxLayout(AlgsPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(AlgsPage);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        leftMenu = new QToolBox(widget);
        leftMenu->setObjectName("leftMenu");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftMenu->sizePolicy().hasHeightForWidth());
        leftMenu->setSizePolicy(sizePolicy);
        baseOperate = new QWidget();
        baseOperate->setObjectName("baseOperate");
        baseOperate->setGeometry(QRect(0, 0, 268, 335));
        verticalLayout = new QVBoxLayout(baseOperate);
        verticalLayout->setObjectName("verticalLayout");
        baseOperateItems = new QListWidget(baseOperate);
        baseOperateItems->setObjectName("baseOperateItems");

        verticalLayout->addWidget(baseOperateItems);

        leftMenu->addItem(baseOperate, QString::fromUtf8("\345\237\272\347\241\200\346\223\215\344\275\234"));
        objectDetection = new QWidget();
        objectDetection->setObjectName("objectDetection");
        objectDetection->setGeometry(QRect(0, 0, 260, 335));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(objectDetection->sizePolicy().hasHeightForWidth());
        objectDetection->setSizePolicy(sizePolicy1);
        objectDetection->setContextMenuPolicy(Qt::DefaultContextMenu);
        objectDetection->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_3 = new QVBoxLayout(objectDetection);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        objectDetectionItems = new QListWidget(objectDetection);
        objectDetectionItems->setObjectName("objectDetectionItems");
        objectDetectionItems->setMidLineWidth(2);

        verticalLayout_3->addWidget(objectDetectionItems);

        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/objectDetection.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftMenu->addItem(objectDetection, icon, QString::fromUtf8("\347\233\256\346\240\207\346\243\200\346\265\213"));
        featureMatch = new QWidget();
        featureMatch->setObjectName("featureMatch");
        featureMatch->setGeometry(QRect(0, 0, 122, 335));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(featureMatch->sizePolicy().hasHeightForWidth());
        featureMatch->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/feature.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftMenu->addItem(featureMatch, icon1, QString::fromUtf8("\347\211\271\345\276\201\347\202\271\346\243\200\346\265\213\344\270\216\345\214\271\351\205\215"));

        horizontalLayout->addWidget(leftMenu);

        rightMainCon = new QStackedWidget(widget);
        rightMainCon->setObjectName("rightMainCon");

        horizontalLayout->addWidget(rightMainCon);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);

        verticalLayout_2->addWidget(widget);


        retranslateUi(AlgsPage);

        leftMenu->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AlgsPage);
    } // setupUi

    void retranslateUi(QWidget *AlgsPage)
    {
        AlgsPage->setWindowTitle(QCoreApplication::translate("AlgsPage", "Form", nullptr));
        leftMenu->setItemText(leftMenu->indexOf(baseOperate), QCoreApplication::translate("AlgsPage", "\345\237\272\347\241\200\346\223\215\344\275\234", nullptr));
        leftMenu->setItemText(leftMenu->indexOf(objectDetection), QCoreApplication::translate("AlgsPage", "\347\233\256\346\240\207\346\243\200\346\265\213", nullptr));
#if QT_CONFIG(tooltip)
        leftMenu->setItemToolTip(leftMenu->indexOf(objectDetection), QCoreApplication::translate("AlgsPage", "\347\233\256\346\240\207\346\243\200\346\265\213", nullptr));
#endif // QT_CONFIG(tooltip)
        leftMenu->setItemText(leftMenu->indexOf(featureMatch), QCoreApplication::translate("AlgsPage", "\347\211\271\345\276\201\347\202\271\346\243\200\346\265\213\344\270\216\345\214\271\351\205\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlgsPage: public Ui_AlgsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGSPAGE_H

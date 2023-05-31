/********************************************************************************
** Form generated from reading UI file 'ImagesViewer.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGESVIEWER_H
#define UI_IMAGESVIEWER_H

#include <QWGraphicsView.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImagesViewer
{
public:
    QVBoxLayout *verticalLayout;
    QWGraphicsView *graphicsView;
    QListView *listView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *cursorInfoLabel;

    void setupUi(QWidget *ImagesViewer)
    {
        if (ImagesViewer->objectName().isEmpty())
            ImagesViewer->setObjectName("ImagesViewer");
        ImagesViewer->resize(579, 458);
        verticalLayout = new QVBoxLayout(ImagesViewer);
        verticalLayout->setObjectName("verticalLayout");
        graphicsView = new QWGraphicsView(ImagesViewer);
        graphicsView->setObjectName("graphicsView");

        verticalLayout->addWidget(graphicsView);

        listView = new QListView(ImagesViewer);
        listView->setObjectName("listView");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listView->sizePolicy().hasHeightForWidth());
        listView->setSizePolicy(sizePolicy);
        listView->setMaximumSize(QSize(16777215, 100));
        listView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        listView->setFlow(QListView::LeftToRight);
        listView->setProperty("isWrapping", QVariant(true));
        listView->setResizeMode(QListView::Adjust);

        verticalLayout->addWidget(listView);

        widget = new QWidget(ImagesViewer);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        cursorInfoLabel = new QLabel(widget);
        cursorInfoLabel->setObjectName("cursorInfoLabel");

        horizontalLayout->addWidget(cursorInfoLabel);


        verticalLayout->addWidget(widget);


        retranslateUi(ImagesViewer);

        QMetaObject::connectSlotsByName(ImagesViewer);
    } // setupUi

    void retranslateUi(QWidget *ImagesViewer)
    {
        ImagesViewer->setWindowTitle(QCoreApplication::translate("ImagesViewer", "Form", nullptr));
        cursorInfoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImagesViewer: public Ui_ImagesViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGESVIEWER_H

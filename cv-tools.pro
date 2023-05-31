QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AlgLineDetection.cpp \
    AlgLineFit.cpp \
    AlgThreshold.cpp \
    AlgsPage.cpp \
    DLPage.cpp \
    ImageItemDelegate.cpp \
    ImageItemModel.cpp \
    ImagesViewer.cpp \
    ImgUtils.cpp \
    OptionsComponent.cpp \
    QWGraphicsView.cpp \
    TimerLog.cpp \
    main.cpp \
    MainWindow.cpp \
    myYolo.cpp

HEADERS += \
    AlgLineDetection.h \
    AlgLineFit.h \
    AlgThreshold.h \
    AlgsPage.h \
    DLPage.h \
    ImageItemDelegate.h \
    ImageItemModel.h \
    ImagesViewer.h \
    ImgUtils.h \
    MainWindow.h \
    OptionsComponent.h \
    QWGraphicsView.h \
    TimerLog.h \
    myYolo.h

FORMS += \
    AlgLineDetection.ui \
    AlgLineFit.ui \
    AlgThreshold.ui \
    AlgsPage.ui \
    DLPage.ui \
    ImagesViewer.ui \
    MainWindow.ui \
    OptionsComponent.ui

TRANSLATIONS += \
    cv-tools_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# OPENCV
macx{ # mac
    INCLUDEPATH += /Users/mqm/WORKSPACE/OPENCV/install/include
    INCLUDEPATH += /Users/mqm/WORKSPACE/OPENCV/install/include/opencv4
    INCLUDEPATH += /Users/mqm/WORKSPACE/OPENCV/install/include/opencv4/opencv2
    LIBS += -L/Users/mqm/WORKSPACE/OPENCV/install/lib -lopencv_world
}

unix:!macx{ # linux

}

win32{ #windows
INCLUDEPATH += D:\softwares\opencv\4.5.5G\include
INCLUDEPATH += D:\softwares\opencv\4.5.5G\include\opencv2
    CONFIG(release, debug|release){
        LIBS += -LD:/softwares/opencv/4.5.5G/x64/vc16/lib -lopencv_world455
    }else:CONFIG(debug, debug|release){
        LIBS += -LD:/softwares/opencv/4.5.5G/x64/vc16/lib -lopencv_world455
    }
}

RESOURCES += \
    resource.qrc

# 添加 Windows 图标
win32: RC_ICONS += images/logo.ico

# 添加 macOS 图标
macosx: ICON = logo.icns

QMAKE_INFO_PLIST += Info.plist


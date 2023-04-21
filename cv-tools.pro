QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    AlgsPage.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS += \
    AlgsPage.h \
    MainWindow.h

FORMS += \
    AlgsPage.ui \
    MainWindow.ui

TRANSLATIONS += \
    cv-tools_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# OPENCV
macx{
    INCLUDEPATH += /Users/mqm/WORKSPACE/OPENCV/install/include
    INCLUDEPATH += /Users/mqm/WORKSPACE/OPENCV/install/include/opencv4
    INCLUDEPATH += /Users/mqm/WORKSPACE/OPENCV/install/include/opencv4/opencv2
    LIBS += -L/Users/mqm/WORKSPACE/OPENCV/install/lib -lopencv_world
}

RESOURCES += \
    resource.qrc

# 添加 Windows 图标
win32: RC_ICONS += logo.ico

# 添加 macOS 图标
macosx: ICON = logo.icns

QMAKE_INFO_PLIST += \
    Info.plist

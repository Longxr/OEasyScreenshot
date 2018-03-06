#-------------------------------------------------
#
# Project created by QtCreator 2018-03-05T16:40:50
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG   += C++11

TARGET = OEScreenshot
TEMPLATE = lib

DEFINES += OESCREENSHOT_LIBRARY
include(./../../Path.pri)

SOURCES += \
    oeamplifier.cpp \
    oecommonhelper.cpp \
    oemodelview.cpp \
    oescreenshot.cpp \
    ToolBarWidget.cpp

HEADERS +=\
    oescreenshot_global.h \
    oeamplifier.h \
    oecommonhelper.h \
    oemodelview.h \
    oescreenshot.h \
    ToolBarWidget.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

RESOURCES += \
    res.qrc

FORMS += \
    ToolBarWidget.ui

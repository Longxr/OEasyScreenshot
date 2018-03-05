#-------------------------------------------------
#
# Project created by QtCreator 2018-03-05T17:12:28
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
win32-msvc*:QMAKE_CXXFLAGS += /wd"4100"

include(./../../Path.pri)

TARGET = ScreenShotDemo
TEMPLATE = app

HEADERS += \
    widget.h

SOURCES += \
    main.cpp \
    widget.cpp

#library
INCLUDEPATH += \
    $$PWD/../../Libraries \

LIBS += \
    -L$$DESTDIR -lOEScreenshot \

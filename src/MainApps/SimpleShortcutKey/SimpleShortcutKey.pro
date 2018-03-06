#-------------------------------------------------
#
# Project created by QtCreator 2017-05-05T10:52:23
#
#-------------------------------------------------

QT       += core gui
CONFIG   += C++11
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
win32-msvc*:QMAKE_CXXFLAGS += /wd"4100"

include(./../../Path.pri)

TARGET = SimpleShortcutKey
TEMPLATE = app

INCLUDEPATH += ../../src \

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

#library
INCLUDEPATH += \
    $$PWD/../../Libraries \

LIBS += \
    -L$$DESTDIR -lOEScreenshot -lQxtGlobalShortcut \

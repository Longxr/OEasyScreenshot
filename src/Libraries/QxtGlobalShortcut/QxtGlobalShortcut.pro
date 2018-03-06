#-------------------------------------------------
#
# Project created by QtCreator 2018-03-06T11:30:38
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG   += C++11

TARGET = QxtGlobalShortcut
TEMPLATE = lib

DEFINES += QXTGLOBALSHORTCUT_LIBRARY
include(./../../Path.pri)

include(qxt.pri)

unix {
    target.path = /usr/lib
    INSTALLS += target
}

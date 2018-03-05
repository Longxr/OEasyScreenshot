#include "widget.h"
#include <QLibrary>
#ifndef QT_NO_DEBUG
#include <QDebug>
#endif

#include "OEScreenshot/oescreenshot.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    OEScreenshot::Instance();
}

Widget::~Widget()
{

}

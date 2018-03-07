#include "oerect.h"

#include <QPen>

#ifndef QT_NO_DEBUG
#include <QDebug>
#endif

#include "oecommonhelper.h"

OERect::OERect(QWidget *parent) : QWidget(parent) {

    /// 设置感知器默认大小
    setFixedSize(95 * OECommonHelper::getWindowHeightMultiplyingPower(),
                 20 * OECommonHelper::getWindowHeightMultiplyingPower());

    /// 填充默认背景
    backgroundPixmap_.reset(new QPixmap(width(),height()));
    backgroundPixmap_->fill((QColor(8, 8, 8, 160)));

    /// 默认隐藏
    hide();
}


void OERect::paintEvent(QPaintEvent *) {
    QPainter painter(this);
    painter.drawPixmap(rect(),*backgroundPixmap_);
    painter.setPen(QPen(QColor(Qt::white)));
    painter.drawText(rect(), Qt::AlignCenter, info_);
}

void OERect::onPostionChange(int x, int y) {
    if (x < 0) x = 0;
    if (y < 0) y = 0;
    const int& ry = y - height() - 1;
    if (ry < 0) {
        this->raise();
    }
    move(x, ((ry < 0) ? y : ry));
    show();
}

void OERect::onSizeChange(int w, int h) {
    info_ = QString("%1 × %2").arg(w).arg(h);
}


#ifndef OERECT_H
#define OERECT_H

#include <QWidget>
#include <QPainter>
#include <memory>

//class OEAmplifier;

/**
 * @class : OERect
 * @brief : 大小感知器
 * @note  : 主要关乎截图器左上方的大小感知控件
*/
class OERect : public QWidget {
    Q_OBJECT

signals:


public:

    explicit OERect(QWidget *parent = 0);

protected:

    /**
     * @brief : 自绘函数
     */
    void paintEvent(QPaintEvent *);

public slots:

    /**
     * @brief : 外部组件位置修改（槽）
     * @note  : 感知器修改自身位置
     * @param : x 横向位置
     * @param : y 纵向位置
     * @date  : 2017年04月15日
     */
    void onPostionChange(int x, int y);

    /**
     * @brief : 外部组件大小修改 （槽）
     * @note  : 感知器修改显示的大小数据
     * @param : w 宽度
     * @param : h 高度
     * @date  : 2017年04月15日
     */
    void onSizeChange(int w, int h);

private:
    /// 背景色
    std::shared_ptr<QPixmap>    backgroundPixmap_;
    /// 显示的文字信息
    QString                     info_;
};


#endif // OERECT_H

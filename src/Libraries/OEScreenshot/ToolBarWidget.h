#ifndef TOOLBARWIDGET_H
#define TOOLBARWIDGET_H

#include <QWidget>

/**
* @class    : ToolBarWidget
* @author   : Longxr
* @date     : 2018/03/06
* @remark   : 编辑图片工具栏
*/

namespace Ui {
class ToolBarWidget;
}

class ToolBarWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ToolBarWidget(QWidget *parent = 0);
    ~ToolBarWidget();

private slots:
    void on_rectBtn_clicked();

    void on_ellipseBtn_clicked();

    void on_arrowBtn_clicked();

    void on_brushBtn_clicked();

    void on_mosaicBtn_clicked();

    void on_textBtn_clicked();

    void on_undoBtn_clicked();

    void on_saveBtn_clicked();

    void on_exitBtn_clicked();

    void on_finishBtn_clicked();

private:
    Ui::ToolBarWidget *ui;
};

#endif // TOOLBARWIDGET_H

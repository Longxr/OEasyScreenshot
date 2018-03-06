#include "ToolBarWidget.h"
#include "ui_ToolBarWidget.h"

ToolBarWidget::ToolBarWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ToolBarWidget)
{
    ui->setupUi(this);
}

ToolBarWidget::~ToolBarWidget()
{
    delete ui;
}

void ToolBarWidget::on_rectBtn_clicked()
{

}

void ToolBarWidget::on_ellipseBtn_clicked()
{

}

void ToolBarWidget::on_arrowBtn_clicked()
{

}

void ToolBarWidget::on_brushBtn_clicked()
{

}

void ToolBarWidget::on_mosaicBtn_clicked()
{

}

void ToolBarWidget::on_textBtn_clicked()
{

}

void ToolBarWidget::on_undoBtn_clicked()
{

}

void ToolBarWidget::on_saveBtn_clicked()
{

}

void ToolBarWidget::on_exitBtn_clicked()
{

}

void ToolBarWidget::on_finishBtn_clicked()
{

}

#include "tableformwidget.h"
#include "tablesetting.h"
#include "ui_TableForm.h"

TableFormWidget::TableFormWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableForm)
{
    ui->setupUi(this);
}

TableFormWidget::~TableFormWidget()
{

}


void TableFormWidget::on_pushButton_clicked()
{
    TableSetting *setting = new TableSetting();
    setting->show();
}

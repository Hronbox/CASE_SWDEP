#include "tableformwidget.h"
#include "tablesetting.h"
#include "ui_TableForm.h"

TableFormWidget::TableFormWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableForm)
{
    ui->setupUi(this);
    QStandardItemModel *model;
    QStringList horizontalHeader;
    horizontalHeader.append("Attributs");
    horizontalHeader.append("type");
    model= new QStandardItemModel;
    model->setHorizontalHeaderLabels(horizontalHeader);
    ui->tableView->setModel(model);
}

TableFormWidget::~TableFormWidget()
{

}


void TableFormWidget::on_pushButton_clicked()
{
    TableSetting setting;
    setting.show();
    if(setting.exec() == QDialog::Accepted)
    {
        QString tabname;
        tabname = setting.tableName();
        ui->label->setText(tabname);
        QStandardItemModel *model= new QStandardItemModel;
        model = setting.table();
        ui->tableView->setModel(model);
    }

}

#include "tablesetting.h"
#include "ui_tablesetting.h"

TableSetting::TableSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TableSetting)
{
    ui->setupUi(this);
    QStringList horizontalHeader;
    horizontalHeader.append("Attributs");
    horizontalHeader.append("type");
    model= new QStandardItemModel;
    model->setHorizontalHeaderLabels(horizontalHeader);
    item = new QStandardItem("111");
    model->setItem(0, 0, item);
    item = new QStandardItem("111");
    model->setItem(0, 1, item);
    ui->tableView->setModel(model);

}

TableSetting::~TableSetting()
{
    delete ui;

}

QString TableSetting::tableName() const
{
    QString name;
    name = ui->lineEdit->text();
    return name;
}

QStandardItemModel *TableSetting::table() const
{
    return model;
}


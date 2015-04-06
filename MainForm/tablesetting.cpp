#include "tablesetting.h"
#include "ui_tablesetting.h"

TableSetting::TableSetting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableSetting)
{
    QStandardItemModel *model;
    ui->setupUi(this);
    QStringList horizontalHeader;
    horizontalHeader.append("Attributs");
    horizontalHeader.append("type");
    model= new QStandardItemModel;
    model->setHorizontalHeaderLabels(horizontalHeader);
    ui->tableView->setModel(model);

}

TableSetting::~TableSetting()
{
    delete ui;
}


void TableSetting::on_Cancel_clicked()
{

}

void TableSetting::on_Ok_clicked()
{
    QString lab;
    lab = ui->lineEdit->text();
    qDebug()<<lab;
}

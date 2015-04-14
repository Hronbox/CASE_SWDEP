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


void TableSetting::on_PlusItem_clicked()
{


int count=model->rowCount();
Combobox cb;
cb.c=1;
cb.r=count;
cb.elemnt.push_back("int");
cb.elemnt.push_back("varchar");
cb.elemnt.push_back("bool");

V.push_back(cb);

LabelDelegate * tr = new LabelDelegate(V2,ui->tableView);
ui->tableView->setItemDelegate(tr) ;

TypeAttrEditorDelegate * cl = new TypeAttrEditorDelegate(V,ui->tableView);
ui->tableView->setItemDelegate(cl) ;

item = new QStandardItem("");
model->insertRow(count,item);
ui->tableView->setModel(model);
}

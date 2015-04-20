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
    model1= new QStandardItemModel;
    model1->setHorizontalHeaderLabels(horizontalHeader);
    ui->tableViewSitting->setModel(model1);

}

TableSetting::~TableSetting()
{
    delete ui;


}

void TableSetting::SetModelinSetting(QStandardItemModel *modelset)
{
  ui->tableViewSitting->setModel(modelset);
}

QString TableSetting::tableName() const
{
    QString name;
    name = ui->lineEdit->text();
    return name;
}

QStandardItemModel *TableSetting::table() const
{
    return model1;
}


void TableSetting::on_PlusItem_clicked()
{
//model1 = ui->tableViewSitting->model()
count = model1->rowCount();
Combobox cb;
cb.c=1;
cb.r=count;
cb.elemnt.push_back("int");
cb.elemnt.push_back("varchar");
cb.elemnt.push_back("bool");

V.push_back(cb);

TypeAttrEditorDelegate * cl = new TypeAttrEditorDelegate(V,ui->tableViewSitting);
ui->tableViewSitting->setItemDelegate(cl) ;

item = new QStandardItem(" ");
model1->insertRow(count,item);
ui->tableViewSitting->setModel(model1);
}

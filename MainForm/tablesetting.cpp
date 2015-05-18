#include "tablesetting.h"
#include "ui_tablesetting.h"
#include <QDebug>

TableSetting::TableSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TableSetting)
{
    ui->setupUi(this);
    QStringList horizontalHeader;
    horizontalHeader.append("Attributs");
    horizontalHeader.append("Type");
    horizontalHeader.append("PK");
    horizontalHeader.append("FK");
    horizontalHeader.append("NN");
    horizontalHeader.append("U");
    model1= new QStandardItemModel;
    model1->setHorizontalHeaderLabels(horizontalHeader);
    ui->tableViewSitting->setModel(model1);
    ui->tableViewSitting->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);
    ui->tableViewSitting->horizontalHeader()->setSectionResizeMode(3,QHeaderView::ResizeToContents);
    ui->tableViewSitting->horizontalHeader()->setSectionResizeMode(4,QHeaderView::ResizeToContents);
    ui->tableViewSitting->horizontalHeader()->setSectionResizeMode(5,QHeaderView::ResizeToContents);
    //ui->tableViewSitting->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    //ui->tableViewSitting->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    connect(ui->tableViewSitting,SIGNAL(activated(const QModelIndex &)),ui->tableViewSitting,SLOT(edit(const QModelIndex &)));
}

TableSetting::~TableSetting()
{
    delete ui;
}

void TableSetting::SetModelinSetting(QStandardItemModel *modelset)
{
  //model1=modelset;
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

void TableSetting::on_MinusItem_clicked()
{
        model1->removeRow(ui->tableViewSitting->currentIndex().row());
}

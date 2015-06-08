#include "tablesetting.h"
#include "ui_tablesetting.h"
#include "tableformwidget.h"
#include <QDebug>

TableSetting::TableSetting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TableSetting)
{
    ui->setupUi(this);

    ViewTable view;

    model= new QStandardItemModel;

    model=view.createView();

    ui->tableViewSitting->setModel(model);

    for (int i=2; i<model->columnCount();i++)
    {
    ui->tableViewSitting->horizontalHeader()->setSectionResizeMode(i,QHeaderView::ResizeToContents);
    }

    connect(ui->tableViewSitting,SIGNAL(activated(const QModelIndex &)),ui->tableViewSitting,SLOT(edit(const QModelIndex &)));
}

TableSetting::~TableSetting()
{
    delete ui;
}

//void TableSetting::SetModelinSetting(QStandardItemModel *modelset)
//{
//  //model1=modelset;
//  //ui->tableViewSitting->setModel(modelset);
//    int rowc = modelset->rowCount();
//    for(int i = 0;i< modelset->rowCount();i++)
//    {
//        count = model1->rowCount();
//        Combobox cb;
//        cb.c=1;
//        cb.r=count;
//        cb.elemnt.push_back("int");
//        cb.elemnt.push_back("varchar");
//        cb.elemnt.push_back("bool");

//        V.push_back(cb);

//        TypeAttrEditorDelegate * cl = new TypeAttrEditorDelegate(V,ui->tableViewSitting);
//        ui->tableViewSitting->setItemDelegate(cl);
//        for(int j=0;j<modelset->columnCount();j++)
//        {
//            QModelIndex myIn;
//            QVariant myDat;
//            QStandardItem *item;
//            if (j>=2)
//            {
//                myIn=modelset->index(i,j,QModelIndex());
//                myDat=modelset->data(myIn,Qt::CheckStateRole);
//                QStandardItem *item1 = static_cast<QStandardItem*>(myIn.internalPointer());
//                Qt::CheckState checkState = static_cast<Qt::CheckState>(myDat.toInt());
//                item1->setCheckState(checkState);
//                qDebug()<<item1;
//            }
//            else
//            {
//                myIn=modelset->index(i,j,QModelIndex());
//                myDat=modelset->data(myIn,Qt::DisplayRole);
//                item = new QStandardItem(myDat.toString());
//                model1->setItem(i,j, item);
//            }



//            //QModelIndex myIn=modelset->index(i,j,QModelIndex());
//            //QVariant myDat=modelset->data(myIn,Qt::DisplayRole);
//            //qDebug()<<myDat;
//           // model1->setItemData(myIn, myDat);
//            //qDebug()<<model1->item(i,j);
//            QString temp = modelset->item(i,j)->text();
//            model1->item(i,j)->setText(temp);
//        }
//    }
//    ui->tableViewSitting->setModel(model1);
//}

QString TableSetting::tableName() const
{
    QString name;
    name = ui->lineEdit->text();
    return name;
}

void TableSetting::setTable(DBTable &table)//доделать атрибуты
{
    delegate();

    item = new QStandardItem(" ");
    model->insertRow(count,item);
    ui->tableViewSitting->setModel(model);
    ui->lineEdit->setText(table.getName());

    QVector<DBAttribute> &attributes = table.getAttributes();

    for(int i=0;i<attributes.size();i++)
    {
        DBAttribute &attribute = attributes[i];

        QStandardItem *itemName = new QStandardItem(attribute.name);
        QStandardItem *itemType = new QStandardItem(attribute.type);
        QStandardItem *itemPK = new QStandardItem(attribute.PK);
        QStandardItem *itemFK = new QStandardItem(attribute.FK);
        QStandardItem *itemNN = new QStandardItem(attribute.NN);
        QStandardItem *itemU = new QStandardItem(attribute.UNIQ);

        model->setItem(i,0,itemName);
        model->setItem(i,1,itemType);
        if(itemPK->text().toInt()==1)
        {
            Qt::CheckState checkState = static_cast<Qt::CheckState>(2);
            itemPK->setCheckState(checkState);
            model->setItem(i,2,itemPK);
        }


    }
}

DBTable TableSetting::getTable()//доделать атрибуты
{
    QModelIndex myInName,myInType,myInPK,myInFK,myInNN,myInU;
    QVariant myDatName,myDatType,myDatPK,myDatFK,myDatNN,myDatU;

    DBTable table;

    for(int i = 0;i< model->rowCount();i++)
    {
        myInName=model->index(i,0,QModelIndex());
        myInType=model->index(i,1,QModelIndex());
        myInPK=model->index(i,2,QModelIndex());
        myInFK=model->index(i,3,QModelIndex());
        myInNN=model->index(i,4,QModelIndex());
        myInU=model->index(i,5,QModelIndex());

        myDatName=model->data(myInName,Qt::DisplayRole);
        myDatType=model->data(myInType,Qt::DisplayRole);
        myDatPK=model->data(myInPK,Qt::CheckStateRole);
        myDatFK=model->data(myInFK,Qt::CheckStateRole);
        myDatNN=model->data(myInNN,Qt::CheckStateRole);
        myDatU=model->data(myInU,Qt::CheckStateRole);

        DBAttribute attribute;

        attribute.name = myDatName.toString();
        attribute.type = myDatType.toString();
        if(myDatPK.toInt()==2)
            attribute.PK = "1";
        else
            attribute.PK = "0";

        if(myDatFK.toInt()==2)
            attribute.FK = "1";
        else
            attribute.FK = "0";

        if(myDatNN.toInt()==2)
            attribute.NN = "1";
        else
            attribute.NN = "0";

        if(myDatU.toInt()==2)
            attribute.UNIQ = "1";
        else
            attribute.UNIQ = "0";

        table.addAttribute(attribute);

    }

    QString tabname = ui->lineEdit->text();
    table.addName(tabname);

    return table;
}


void TableSetting::on_PlusItem_clicked()
{
delegate();

item = new QStandardItem(" ");
model->insertRow(count,item);
ui->tableViewSitting->setModel(model);
}

void TableSetting::on_MinusItem_clicked()
{
    model->removeRow(ui->tableViewSitting->currentIndex().row());
}

void TableSetting::delegate()
{
    count = model->rowCount();
    Combobox cb;
    cb.c=1;
    cb.r=count;
    cb.elemnt.push_back("int");
    cb.elemnt.push_back("varchar");
    cb.elemnt.push_back("bool");

    V.push_back(cb);

    TypeAttrEditorDelegate * cl = new TypeAttrEditorDelegate(V,ui->tableViewSitting);
    ui->tableViewSitting->setItemDelegate(cl);
}

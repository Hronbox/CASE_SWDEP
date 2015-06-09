#include "tableformwidget.h"
#include "ui_TableForm.h"

TableFormWidget::TableFormWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableForm)
{
        ui->setupUi(this);

        ViewTable view;

        model= new QStandardItemModel;

        model=view.createView();

        ui->tableViewWidget->setModel(model);

        for (int i=2; i<model->columnCount();i++)
        {
        ui->tableViewWidget->horizontalHeader()->setSectionResizeMode(i,QHeaderView::ResizeToContents);
        }

        connect(ui->tableViewWidget,SIGNAL(activated(const QModelIndex &)),ui->tableViewWidget,SLOT(edit(const QModelIndex &)));

}

TableFormWidget::~TableFormWidget()
{

}

void TableFormWidget::setTable(DBTable *table)
{
    this->table = table;
}

void TableFormWidget::updateWidgetFromData()//доделать атрибуты
{
    QVector<DBAttribute> &attributes = table->getAttributes();

    for(int i=0;i<attributes.size();i++)
    {
        DBAttribute &attribute = attributes[i];

        QStandardItem *item = new QStandardItem(attribute.name);
        model->setItem(i,0,item);
    }
}

DBTable *TableFormWidget::getTable()
{
    return table;
}


void TableFormWidget::on_pushButton_clicked()
{
    TableSetting setting;

    setting.setTable(*table);

    setting.show();
    if(setting.exec() == QDialog::Accepted)
    {
        QString tabname;
        tabname = setting.tableName();
        ui->label->setText(tabname);

        *table = setting.getTable();

        updateWidgetFromData();
    }

}



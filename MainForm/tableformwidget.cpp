#include "tableformwidget.h"
#include "tablesetting.h"
#include "ui_TableForm.h"

TableFormWidget::TableFormWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TableForm)
{
    //connect(this,SIGNAL(activated(QModelIndex)),this,SLOT(edit(QModelIndex)));
    ui->setupUi(this);
    QStringList horizontalHeader;
    horizontalHeader.append("Attributs");
    horizontalHeader.append("Type");
    horizontalHeader.append("PK");
    horizontalHeader.append("FK");
    horizontalHeader.append("NN");
    horizontalHeader.append("U");
    model= new QStandardItemModel();
    model->setHorizontalHeaderLabels(horizontalHeader);
    ui->tableViewWidget->setModel(model);
    ui->tableViewWidget->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);
    ui->tableViewWidget->horizontalHeader()->setSectionResizeMode(3,QHeaderView::ResizeToContents);
    ui->tableViewWidget->horizontalHeader()->setSectionResizeMode(4,QHeaderView::ResizeToContents);
    ui->tableViewWidget->horizontalHeader()->setSectionResizeMode(5,QHeaderView::ResizeToContents);
    //ui->tableViewWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    //ui->tableViewWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    connect(ui->tableViewWidget,SIGNAL(activated(const QModelIndex &)),ui->tableViewWidget,SLOT(edit(const QModelIndex &)));
}

TableFormWidget::~TableFormWidget()
{

}

void TableFormWidget::InsertStructData()
{
    for (int i=0 ; i<model->rowCount() ; i++)
        {
            for (int j=0 ; j<2 ; j++)
            {
                QModelIndex myInd=ui->tableViewWidget->model()->index(i,j,QModelIndex());
                QVariant myDat=ui->tableViewWidget->model()->data(myInd,Qt::DisplayRole);

            }
        }
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
        ui->tableViewWidget->setModel(model);
    }

}

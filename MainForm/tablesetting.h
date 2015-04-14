#ifndef TABLESETTING_H
#define TABLESETTING_H

#include <QDialog>
#include <QString>
#include <QModelIndex>
#include <QVector>
#include <QStringList>

#include"QStandardItemModel"
#include "QStandardItem"
#include "typeattreditordelegate.h"
#include "labeldelegate.h"
#include "QAbstractTableModel"

namespace Ui {
class TableSetting;
}
class TableSetting : public QDialog
{
    Q_OBJECT

public:
    explicit TableSetting(QWidget *parent = 0);
    ~TableSetting();



    QStandardItemModel *model;
    QStandardItem *item;

    QString tableName() const;
    QStandardItemModel *table() const;




    QVector <Combobox> V;
    QVector <LineEdit> V2;


private slots:

    void on_PlusItem_clicked();

private:
    Ui::TableSetting *ui;
};

#endif // TABLESETTING_H

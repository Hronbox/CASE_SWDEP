#ifndef TABLESETTING_H
#define TABLESETTING_H

#include <QDialog>
#include <QString>
#include <QModelIndex>
#include <QVector>
#include <QStringList>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QAbstractTableModel>

#include "typeattreditordelegate.h"
#include "tableformwidget.h"
#include "viewtable.h"


#include "dbtable.h"

namespace Ui {
class TableSetting;
}
class TableSetting : public QDialog
{
    Q_OBJECT

public:
    explicit TableSetting(QWidget *parent = 0);
    ~TableSetting();

    QStandardItem *item;

    QString tableName() const;
    QVector <Combobox> V;

    void setTable(DBTable &table);

    DBTable getTable();

private slots:

    void on_PlusItem_clicked();

    void on_MinusItem_clicked();

private:
    Ui::TableSetting *ui;
    QStandardItemModel *model;
    int count;
    void delegate();
};

#endif // TABLESETTING_H

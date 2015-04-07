#ifndef TABLESETTING_H
#define TABLESETTING_H

#include <QDialog>
#include <QString>
#include <QModelIndex>
#include <QVector>

#include"QStandardItemModel"
#include "QStandardItem"
#include "typeattreditordelegate.h"

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


private slots:

private:
    Ui::TableSetting *ui;
};

#endif // TABLESETTING_H

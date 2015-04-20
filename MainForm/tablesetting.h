#ifndef TABLESETTING_H
#define TABLESETTING_H

#include <QDialog>
#include <QString>
#include <QModelIndex>
#include <QVector>
#include <QStringList>
#include <QStandardItem>
#include <QAbstractTableModel>

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
    void SetModelinSetting(QStandardItemModel *modelset);




    QStandardItem *item;

    QString tableName() const;
    QStandardItemModel *table() const;




    QVector <Combobox> V;


private slots:

    void on_PlusItem_clicked();

private:
    Ui::TableSetting *ui;
    QStandardItemModel *model1;
    int count;
};

#endif // TABLESETTING_H

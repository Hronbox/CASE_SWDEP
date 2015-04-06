#ifndef TABLESETTING_H
#define TABLESETTING_H

#include <QWidget>
#include <QStringList>
#include <QString>
#include <QDebug>

#include "QStandardItemModel"

namespace Ui {
class TableSetting;
}

class TableSetting : public QWidget
{
    Q_OBJECT

public:
    explicit TableSetting(QWidget *parent = 0);
    ~TableSetting();
    QStandardItemModel *model;

private slots:

    void on_Cancel_clicked();

    void on_Ok_clicked();

private:
    Ui::TableSetting *ui;
};

#endif // TABLESETTING_H

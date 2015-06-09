#ifndef TABLEFORMWIDGET_H
#define TABLEFORMWIDGET_H

#include <QWidget>
#include <QString>
#include <QVector>
#include <QMouseEvent>
#include <QDebug>
#include<QStandardItemModel>

#include "typeattreditordelegate.h"
#include "tablesetting.h"
#include "viewtable.h"
#include "dbtable.h"

namespace Ui {
class TableForm;
}

class TableFormWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TableFormWidget(QWidget *parent = 0);
    ~TableFormWidget();
    void reDrow(QString nameTable);
    void InsertStructData();
    QVector <Combobox> V;


    QStandardItemModel *tablefromwidget() const;

    int mousePressPointX() const {return xpos;}
    int mousePressPointY() const {return ypos;}

    void setTable(DBTable *table);
    DBTable *getTable();
    void updateWidgetFromData();

signals:
    void sendData(QString str);


protected:

public slots:

private slots:
    void on_pushButton_clicked();


private:
    Ui::TableForm *ui;
    int xpos;
    int ypos;
    bool _isBeingDragged;
    QStandardItemModel *model;

    DBTable *table;
};


#endif // TABLEFORMWIDGET_H

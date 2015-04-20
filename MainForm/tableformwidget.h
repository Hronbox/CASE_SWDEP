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
    QVector <Combobox> V;


    int mousePressPointX() const {return xpos;}
    int mousePressPointY() const {return ypos;}



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
};


#endif // TABLEFORMWIDGET_H

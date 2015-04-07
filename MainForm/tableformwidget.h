#ifndef TABLEFORMWIDGET_H
#define TABLEFORMWIDGET_H

#include <QWidget>
#include <QString>
#include <QVector>

#include "typeattreditordelegate.h"

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


signals:
    void sendData(QString str);

public slots:

private slots:
    void on_pushButton_clicked();


private:
    Ui::TableForm *ui;
};


#endif // TABLEFORMWIDGET_H

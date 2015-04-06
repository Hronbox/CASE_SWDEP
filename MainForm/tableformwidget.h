#ifndef TABLEFORMWIDGET_H
#define TABLEFORMWIDGET_H

#include <QWidget>

namespace Ui {
class TableForm;
}

class TableFormWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TableFormWidget(QWidget *parent = 0);
    ~TableFormWidget();

signals:

public slots:
private slots:
    void on_pushButton_clicked();

private:
    Ui::TableForm *ui;
};

#endif // TABLEFORMWIDGET_H

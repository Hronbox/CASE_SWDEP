#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedLayout>
#include <QFormLayout>
#include <QGridLayout>
#include <QMouseEvent>

#include <containerwidget.h>
#include "tableformwidget.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    ContainerWidget *container = new ContainerWidget;
    TableFormWidget *tableForm = new TableFormWidget;

private slots:

    void on_pushButton_3_clicked();

    void on_pushButton_3_pressed();

    void on_pushButton_3_released();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_action_7_triggered();

    void setgeometryscroll();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

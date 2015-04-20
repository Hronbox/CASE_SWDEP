#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedLayout>
#include <QFormLayout>
#include <QGridLayout>
#include <QMouseEvent>

#include "containerwidget.h"
#include "tableformwidget.h"
#include "widgetgenerationscript.h"



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
    WidgetGenerationScript *ScriptForm = new WidgetGenerationScript;

private slots:

    void on_pushButton_3_clicked();

    void on_pushButton_3_pressed();

    void on_pushButton_3_released();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_action_7_triggered();

    void setgeometryscroll();


    void on_action_5_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

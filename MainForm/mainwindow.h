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

    void on_tableRadio_clicked();

    void on_one_to_one_clicked();

    void setgeometryscroll();

    void on_one_to_N_clicked();

    void on_Editing_clicked();

    void on_close_triggered();

    void on_createSript_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

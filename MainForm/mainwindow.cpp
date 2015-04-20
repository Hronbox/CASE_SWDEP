#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QScrollArea>
#include <QScrollBar>
#include <QCursor>
#include <QPoint>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->scrollArea->setBackgroundRole(QPalette::Dark);
    ui->scrollArea->setWidget(container);

    ui->scrollArea->setWidgetResizable(true);
    ui->scrollArea->setupViewport(container);

    connect(container,SIGNAL(sig()),this,SLOT(setgeometryscroll()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setgeometryscroll()
{
  // QSize areaSize = ui->scrollArea->viewport()->size();

    QSize containersize = container->size();
    QSize widgetSize = tableForm->size();

    QCursor *cur = new QCursor;
    QPoint pos = cur->pos();
    qDebug()<<containersize;
    qDebug()<<pos;

    if(pos.x()+widgetSize.width()>=containersize.width())
        container->setFixedWidth(widgetSize.width() + containersize.width());

    if(pos.y()+widgetSize.height()>=containersize.height())
        container->setFixedHeight(widgetSize.height() + containersize.height());

    if((pos.x()+widgetSize.width()>=containersize.width())&&(pos.y()+widgetSize.height()>=containersize.height()))
    {
        container->setFixedWidth(widgetSize.width() + containersize.width());
        container->setFixedHeight(widgetSize.height() + containersize.height());
    }
}

void MainWindow::on_pushButton_3_clicked()
{

}

void MainWindow::on_pushButton_3_pressed()
{
    container->changetrigtrue();
}

void MainWindow::on_pushButton_3_released()
{
   container->changetrigfalse();
}

void MainWindow::on_radioButton_clicked()
{
    container->changetrigtrue();
    //фолс для связей
}


void MainWindow::on_radioButton_2_clicked()
{
    container->changetrigfalse();
    //тру для связей
}

void MainWindow::on_radioButton_3_clicked()
{
    container->changetrigfalse();
    //фолс для связей
}

void MainWindow::on_action_7_triggered()
{
    close();
}


void MainWindow::on_action_5_triggered()
{
    WidgetGenerationScript *ScriptForm = new WidgetGenerationScript();
    ScriptForm->loadPlugins();
    ScriptForm->show();
}

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

void MainWindow::on_tableRadio_clicked()
{
    container->trigTable = true;
    container->trigConection1To1 = false;
    container->trigConection1ToM = false;
    container->trigEdit = false;
}


void MainWindow::on_one_to_one_clicked()
{
    container->trigTable = false;
    container->trigConection1To1 = true;
    container->trigConection1ToM = false;
    container->trigEdit = false;
}

void MainWindow::on_one_to_N_clicked()
{
    container->trigTable = false;
    container->trigConection1To1 = false;
    container->trigConection1ToM = true;
    container->trigEdit = false;
}

void MainWindow::on_Editing_clicked()
{
    container->trigTable = false;
    container->trigConection1To1 = false;
    container->trigConection1ToM = false;
    container->trigEdit = true;
}

void MainWindow::on_close_triggered()
{
     close();
}

void MainWindow::on_createSript_triggered()
{
    ScriptForm = new WidgetGenerationScript();
    ScriptForm->loadPlugins();
    ScriptForm->show();

}

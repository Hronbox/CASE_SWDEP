#include "mainwindow.h"
#include "ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QGridLayout *grid = new QGridLayout();
//    grid->addWidget(new ContainerWidget);
//    ui->scrollArea->setLayout(grid);



    ui->scrollArea->setWidget(container);
    ui->scrollArea->setWidgetResizable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
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

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_TableForm.h"
#include <containerwidget.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QGridLayout *grid = new QGridLayout();
//    grid->addWidget(new ContainerWidget);
//    ui->scrollArea->setLayout(grid);
    ui->scrollArea->setWidget(new ContainerWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_3_clicked()
{

}

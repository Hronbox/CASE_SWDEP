#include "containerwidget.h"


ContainerWidget::ContainerWidget(QWidget *parent) :
    QWidget(parent)
{
//    formlayout = new QFormLayout();
//    setLayout(formlayout);
}

void ContainerWidget::mousePressEvent(QMouseEvent *mouseEvent)
{
    QLabel *metka =new QLabel("sad",this);
    //metka->move(mouseEvent->x(),mouseEvent->y());
    metka->move(10,10);


   // TableForm *frame = new TableForm(this);
    //formlayout->addWidget(metka);
}

void ContainerWidget::mouseMoveEvent(QMouseEvent *mouseEvent)
{

}

void ContainerWidget::mouseReleaseEvent(QMouseEvent *mouseEvent)
{

}

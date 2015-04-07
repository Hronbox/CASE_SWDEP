#include "containerwidget.h"

#include "tableformwidget.h"

ContainerWidget::ContainerWidget(QWidget *parent) :
    QWidget(parent)
{
    trig=false;
}

void ContainerWidget::changetrigtrue()
{
    trig = true;
}

void ContainerWidget::changetrigfalse()
{
    trig = false;
}
void ContainerWidget::mousePressEvent(QMouseEvent *mouseEvent)
{
    if(trig == true)
    {
    TableFormWidget *tableForm = new TableFormWidget(this);
    tableForm->move(mouseEvent->x(),mouseEvent->y());

    tableForm->show();
    }

}

void ContainerWidget::mouseMoveEvent(QMouseEvent *mouseEvent)
{

}

void ContainerWidget::mouseReleaseEvent(QMouseEvent *mouseEvent)
{

}

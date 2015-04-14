#include "containerwidget.h"



ContainerWidget::ContainerWidget(QWidget *parent) :
    QWidget(parent)
{
    trig=false;
    pressedTableForm = NULL;
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
    pressedTableForm =  dynamic_cast<TableFormWidget*>(childAt(mouseEvent->x(),mouseEvent->y()));

    if(trig == true && pressedTableForm == NULL)
    {
        TableFormWidget *tableForm = new TableFormWidget(this);
        tableForm->move(mouseEvent->x(),mouseEvent->y());

        tableForms.push_back(tableForm);

        tableForm->show();

        emit sig();
    }
}

void ContainerWidget::mouseMoveEvent(QMouseEvent *mouseEvent)
{
    if(pressedTableForm == NULL)
        return;

    pressedTableForm->move(mouseEvent->x(),mouseEvent->y());
    pressedTableForm->show();
}

void ContainerWidget::mouseReleaseEvent(QMouseEvent *mouseEvent)
{
    pressedTableForm = NULL;
    emit sig();
}



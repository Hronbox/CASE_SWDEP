#include "containerwidget.h"

ContainerWidget::ContainerWidget(QWidget *parent) :
    QWidget(parent)
{
    trigTable=false;
    pressedTableForm = NULL;
}


void ContainerWidget::mousePressEvent(QMouseEvent *mouseEvent)
{
    pressedTableForm =  dynamic_cast<TableFormWidget*>(childAt(mouseEvent->x(),mouseEvent->y()));


    qDebug()<<childAt(mouseEvent->x(),mouseEvent->y());

    if(trigTable == true && pressedTableForm == NULL)
    {
        TableFormWidget *tableForm = new TableFormWidget(this);
//        palette.setColor( QColor( Qt::red ), QPalette::Background );
//        tableForm->setPalette(palette);
        tableForm->move(mouseEvent->x(),mouseEvent->y());

        auto table = new DBTable;
        tableForm->setTable(table);


        MainData::instance()->getTables().push_back(table);

        tableForms.push_back(tableForm);

        tableForm->show();

        emit sig();
    }


    if(trigTable == false && pressedTableForm != NULL)
    {
        QString name =pressedTableForm->getTable()->getName();
        qDebug()<<name;
    }



}

void ContainerWidget::mouseMoveEvent(QMouseEvent *mouseEvent)
{
    if(pressedTableForm == NULL)
        return;
    if(trigTable==true)
    {
        pressedTableForm->move(mouseEvent->x(),mouseEvent->y());
        pressedTableForm->show();
    }


}

void ContainerWidget::mouseReleaseEvent(QMouseEvent *mouseEvent)
{
    pressedTableForm = NULL;
    emit sig();
}

void ContainerWidget::wheelEvent(QWheelEvent *event)
{

    scale+=(event->delta()/120);

}

void ContainerWidget::paintEvent(QPaintEvent *event)
{
    QPainter p;
    p.begin(this);
    p.scale(scale,scale);

}




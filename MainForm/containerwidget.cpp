#include "containerwidget.h"

ContainerWidget *shared;

ContainerWidget::ContainerWidget(QWidget *parent) :
    QWidget(parent)
{
    shared = this;

    trigTable = false;
    trigConection1To1 = false;
    trigConection1ToM = false;
    trigEdit = false;
    trigDelete = false;
    pressedTableForm = NULL;
}

ContainerWidget *ContainerWidget::getShared()
{
    return shared;
}

void ContainerWidget::deleteTableFormById(IdTable idTable)
{
    for(int i=0;i<tableForms.size();i++)
    {
        if(tableForms[i]->getTable()->getIdTable() == idTable)
        {
            delete tableForms[i];
            tableForms.remove(i);
            update();
            return;
        }
    }
}


void ContainerWidget::mousePressEvent(QMouseEvent *mouseEvent)
{
    pressedTableForm =  dynamic_cast<TableFormWidget*>(childAt(mouseEvent->x(),mouseEvent->y()));

    wid = childAt(mouseEvent->x(),mouseEvent->y());
    if(wid != NULL)
    {
        widgetName = wid->objectName();
        qDebug()<<wid->objectName();
    }

    if (mouseEvent->buttons() & Qt::RightButton)
    {
        trigTable = false;
        trigConection1To1 = false;
        trigConection1ToM = false;
        trigEdit = false;
        sigClose();
        QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));
    }

    if(trigTable == true && wid == NULL)
    {
        TableFormWidget *tableForm = new TableFormWidget(this);
        tableForm->move(mouseEvent->x(),mouseEvent->y());

        auto table = new DBTable;
        tableForm->setTable(table);


        MainData::instance()->getTables().push_back(table);

        tableForms.push_back(tableForm);

        tableForm->show();

        emit sig();//вызываем MainWindow::setgeometryscroll() для отрисовки рабочей области
    }

    if(trigEdit==true  && wid != NULL)//если что-то есть - зажатая лапка, нужно узнавать что именно под курсором
    {
        QApplication::setOverrideCursor(QCursor(Qt::ClosedHandCursor));
        offsetMove.setX(pressedTableForm->geometry().x()-mouseEvent->x());
        offsetMove.setY(pressedTableForm->geometry().y()-mouseEvent->y());
    }

    if((trigConection1To1==true||trigConection1ToM==true) && pressedTableForm != NULL)
    { 
        selectedTable = pressedTableForm->getTable();
    }

    if(trigDelete==true)
    {
        deleteTableId = pressedTableForm->getTable()->getIdTable();
        MainData::deleteTableByID(deleteTableId);
    }
}

void ContainerWidget::mouseMoveEvent(QMouseEvent *mouseEvent)
{ 
//    if(wid == NULL)
//        return;
    if(trigEdit==true && pressedTableForm != NULL)
    {
        pressedTableForm->move(mouseEvent->x()+offsetMove.x(),mouseEvent->y() + offsetMove.y());
        pressedTableForm->show();
        update();
    }
    emit sig();//вызываем MainWindow::setgeometryscroll() для отрисовки рабочей области
}

void ContainerWidget::mouseReleaseEvent(QMouseEvent *mouseEvent)
{  
    emit sig();//вызываем MainWindow::setgeometryscroll() для отрисовки рабочей области
    pressed2TableForm =  dynamic_cast<TableFormWidget*>(childAt(mouseEvent->x(),mouseEvent->y()));
    if(trigConection1To1==true||trigConection1ToM==true)
    {
        if(selectedTable != NULL)
        {
            selectedTable->addConnection( *pressed2TableForm->getTable() );
            update();
        }
    }

    if(trigEdit==true)
    {
        QApplication::setOverrideCursor(QCursor(Qt::OpenHandCursor));
    }
//    if(pressed2TableForm == NULL)
//    {
//        QApplication::setOverrideCursor(QCursor(Qt::ArrowCursor));
//    }
    pressedTableForm = NULL;
}

void ContainerWidget::wheelEvent(QWheelEvent *event)
{
    scale+=(event->delta()/120);
}

TableFormWidget *ContainerWidget::getTableFormById(IdTable idTable)
{
    for(int i=0;i<tableForms.size();i++)
    {
        if(tableForms[i]->getTable()->getIdTable()==idTable)
            return tableForms[i];

    }

    return NULL;
}

void ContainerWidget::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    //p.begin(this);
   //p.scale(scale,scale);

    p.setRenderHint( QPainter::Antialiasing, true );
    p.setPen( QPen( Qt::black, 5 ) );

    for(int i=0;i<tableForms.size();i++)
    {
        QPoint pos = tableForms[i]->pos();

        pos = QPoint(pos.x()+tableForms[i]->width()/2, pos.y()+tableForms[i]->height()/2);

        QVector<IdTable> &forTables = tableForms[i]->getTable()->getForeignTables();

        for(int j=0;j<forTables.size();j++)
        {
            TableFormWidget *formWidget2 = getTableFormById(forTables[j]);

            QPoint pos2 = formWidget2->pos();
            pos2 = QPoint(pos2.x()+formWidget2->width()/2, pos2.y()+formWidget2->height()/2);

            p.drawLine( pos, pos2 );
        }


    }
}




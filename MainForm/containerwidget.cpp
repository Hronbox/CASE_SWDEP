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


    if(trigTable == true && pressedTableForm == NULL)
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


    if(trigTable == false && pressedTableForm != NULL)
    {
        selectedTable = pressedTableForm->getTable();
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
        update();
    }
    if(trigConection1To1==true)
    {

    }

}

void ContainerWidget::mouseReleaseEvent(QMouseEvent *mouseEvent)
{
    emit sig();//вызываем MainWindow::setgeometryscroll() для отрисовки рабочей области
    if(trigConection1To1==true)
    {
        pressed2TableForm =  dynamic_cast<TableFormWidget*>(childAt(mouseEvent->x(),mouseEvent->y()));

        if(selectedTable != NULL)
        {
            selectedTable->addConnection( *pressed2TableForm->getTable() );
            update();
        }
    }
    pressedTableForm = NULL;
}

void ContainerWidget::wheelEvent(QWheelEvent *event)
{

    scale+=(event->delta()/120);

}

void ContainerWidget::updateLines()
{

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

            if(formWidget2==NULL)
            {
                qDebug() << "Служу россии!";
                exit(0);
            }

            QPoint pos2 = formWidget2->pos();
            pos2 = QPoint(pos2.x()+formWidget2->width()/2, pos2.y()+formWidget2->height()/2);

            p.drawLine( pos, pos2 );
        }


    }
}




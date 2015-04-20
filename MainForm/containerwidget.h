#ifndef CONTAINERWIDGET_H
#define CONTAINERWIDGET_H

#include <QWidget>
#include <QFormLayout>
#include <QMouseEvent>
#include <QLabel>
#include <QScrollArea>
#include <QApplication>
#include <QDebug>
#include <QGraphicsItem>
#include <QWheelEvent>
#include <QEvent>

#include "tableformwidget.h"

class ContainerWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ContainerWidget(QWidget *parent = 0);


    QWidget *base;
    bool trig;
    void changetrigtrue();
    void changetrigfalse();
protected:
    virtual void mousePressEvent( QMouseEvent *mouseEvent );
    virtual void mouseMoveEvent ( QMouseEvent *mouseEvent );
    virtual void mouseReleaseEvent ( QMouseEvent *mouseEvent );
    void paintEvent ( QPaintEvent * event );
    void wheelEvent ( QWheelEvent * event );
    QFormLayout *formlayout;

signals:
    void sig();

private slots:

private:
    std::vector< TableFormWidget * > tableForms;
    TableFormWidget *pressedTableForm;
    qreal scale;
};

#endif // CONTAINERWIDGET_H

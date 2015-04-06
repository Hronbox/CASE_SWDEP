#ifndef CONTAINERWIDGET_H
#define CONTAINERWIDGET_H

#include <QWidget>
#include <QFormLayout>
#include <QMouseEvent>
#include <QLabel>
#include <QScrollArea>

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
    QFormLayout *formlayout;



signals:

public slots:

};

#endif // CONTAINERWIDGET_H

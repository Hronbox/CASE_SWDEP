#ifndef LABELDELEGATE_H
#define LABELDELEGATE_H

#include <QItemDelegate>
#include <QVector>
#include <QTableView>
#include <QStringList>
#include <QPainter>
#include <QLineEdit>

struct LineEdit{
int r;
int c;
};

class LabelDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    explicit LabelDelegate(QObject *parent = 0);
    QVector <LineEdit> V1;

    LabelDelegate(const QVector <LineEdit> &V2,QObject *parent=0): QItemDelegate(parent)
    {
    }

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void setEditorData(QWidget *editor,const QModelIndex &index) const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const;


signals:

public slots:

};

#endif // LABELDELEGATE_H

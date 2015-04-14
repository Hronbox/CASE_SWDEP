#include "labeldelegate.h"

LabelDelegate::LabelDelegate(QObject *parent) :
    QItemDelegate(parent)
{
}
QWidget *LabelDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{

    for (int i=0;i<V1.size();i++)
    {
    if ((index.row()==V1[i].r)&&(index.column()==V1[i].c))
    {
        QLineEdit *editor = new QLineEdit(parent);
        return editor;


   // QObject::connect(editor, SIGNAL(editTextChanged(QString)),this, SLOT(commitAndCloseEditor()));

    return editor;
    }
    }

    return QItemDelegate::createEditor(parent, option, index);

}

void LabelDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QStyleOptionViewItem o = option;
    QPalette::ColorGroup cg = o.state & QStyle::State_FocusAtBorder ? QPalette::Normal : QPalette::Disabled;
    for (int i=0;i<V1.size();i++)
    {
        if ((index.row()==V1[i].r)&&(index.column()==V1[i].c))
        {
            o.font.setItalic(true);
            painter->fillRect(option.rect, option.palette.color(cg, QPalette::Highlight));
        }
    }
    QItemDelegate::paint(painter,o,index);
}

void LabelDelegate::setEditorData(QWidget *editor,const QModelIndex &index) const
{
    for (int i=0;i<V1.size();i++)
    {
        if ((index.row()==V1[i].r)&&(index.column()==V1[i].c))
        {
            // Fetch current data from model.
            QString value = index.model()->data(index, Qt::EditRole).toString();

            // Set line edit text to current data.
            QLineEdit * lineEdit = static_cast<QLineEdit*>(editor);
            lineEdit->setText(value);

            // Deselect text.
            lineEdit->deselect();

            // Move the cursor to the beginning.
            lineEdit->setCursorPosition(0);
        }
        else
        {
            return QItemDelegate::setEditorData(editor, index);
        }
    }


}


void LabelDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{
    for (int i=0;i<V1.size();i++)
    {
        if ((index.row()==V1[i].r)&&(index.column()==V1[i].c))
        {
            QLineEdit * lineEdit = static_cast<QLineEdit*>(editor);
            QString value = lineEdit->text();
            model->setData(index, value, Qt::EditRole);
        }
    }
}

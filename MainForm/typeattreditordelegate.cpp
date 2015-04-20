#include "typeattreditordelegate.h"

TypeAttrEditorDelegate::TypeAttrEditorDelegate(QObject *parent) :
    QItemDelegate(parent)
{
}

QWidget *TypeAttrEditorDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{


    QComboBox *editor = new QComboBox(parent);
    editor->setCurrentIndex(0);
    for (int i=0;i<V1.size();i++)
    {
    if ((index.row()==V1[i].r)&&(index.column()==V1[i].c))
    {
        if(V1[i].elemnt != index.data())
        editor->addItems(V1[i].elemnt);


   // QObject::connect(editor, SIGNAL(editTextChanged(QString)),this, SLOT(commitAndCloseEditor()));

    return editor;
    }
    }

    return QItemDelegate::createEditor(parent, option, index);

}

void TypeAttrEditorDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
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

void TypeAttrEditorDelegate::setEditorData(QWidget *editor,const QModelIndex &index) const
{
    for (int i=0;i<V1.size();i++)
    {
        if ((index.row()==V1[i].r)&&(index.column()==V1[i].c))
        {
            int value = index.model()->data(index, Qt::EditRole).toInt();
            QComboBox *comboBox = static_cast< QComboBox*>(editor);
            int ind=comboBox->findText(QString::number(value));
            comboBox->setCurrentIndex(ind);
        }
        else
        {
            return QItemDelegate::setEditorData(editor, index);
        }
    }


}


void TypeAttrEditorDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,const QModelIndex &index) const
{
    for (int i=0;i<V1.size();i++)
    {
        if ((index.row()==V1[i].r)&&(index.column()==V1[i].c))
        {
            QComboBox *comboBox = static_cast< QComboBox*>(editor);
            QString value=comboBox->currentText();
            model->setData(index, value, Qt::EditRole);
        }
        if (index.column()==0)
                {

                    model->setData(index, (static_cast<QLineEdit*>( editor ))->text(), Qt::EditRole);
                }
    }
}

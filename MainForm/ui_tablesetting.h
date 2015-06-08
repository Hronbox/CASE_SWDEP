/********************************************************************************
** Form generated from reading UI file 'tablesetting.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLESETTING_H
#define UI_TABLESETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_TableSetting
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tableViewSitting;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *PlusItem;
    QPushButton *MinusItem;

    void setupUi(QDialog *TableSetting)
    {
        if (TableSetting->objectName().isEmpty())
            TableSetting->setObjectName(QStringLiteral("TableSetting"));
        TableSetting->resize(397, 346);
        buttonBox = new QDialogButtonBox(TableSetting);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(220, 310, 156, 23));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableViewSitting = new QTableView(TableSetting);
        tableViewSitting->setObjectName(QStringLiteral("tableViewSitting"));
        tableViewSitting->setGeometry(QRect(32, 66, 351, 192));
        sizePolicy.setHeightForWidth(tableViewSitting->sizePolicy().hasHeightForWidth());
        tableViewSitting->setSizePolicy(sizePolicy);
        label = new QLabel(TableSetting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(32, 40, 95, 16));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        lineEdit = new QLineEdit(TableSetting);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(154, 37, 133, 20));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        PlusItem = new QPushButton(TableSetting);
        PlusItem->setObjectName(QStringLiteral("PlusItem"));
        PlusItem->setEnabled(true);
        PlusItem->setGeometry(QRect(320, 275, 28, 24));
        sizePolicy.setHeightForWidth(PlusItem->sizePolicy().hasHeightForWidth());
        PlusItem->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("ico/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PlusItem->setIcon(icon);
        MinusItem = new QPushButton(TableSetting);
        MinusItem->setObjectName(QStringLiteral("MinusItem"));
        MinusItem->setGeometry(QRect(354, 275, 28, 24));
        sizePolicy.setHeightForWidth(MinusItem->sizePolicy().hasHeightForWidth());
        MinusItem->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral("ico/subtract.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MinusItem->setIcon(icon1);
        PlusItem->raise();
        MinusItem->raise();
        buttonBox->raise();
        tableViewSitting->raise();
        lineEdit->raise();
        label->raise();

        retranslateUi(TableSetting);
        QObject::connect(buttonBox, SIGNAL(rejected()), TableSetting, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), TableSetting, SLOT(accept()));

        QMetaObject::connectSlotsByName(TableSetting);
    } // setupUi

    void retranslateUi(QDialog *TableSetting)
    {
        TableSetting->setWindowTitle(QApplication::translate("TableSetting", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
        label->setText(QApplication::translate("TableSetting", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
        PlusItem->setText(QString());
        MinusItem->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TableSetting: public Ui_TableSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLESETTING_H

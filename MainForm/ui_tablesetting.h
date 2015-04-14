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
    QLineEdit *lineEdit;
    QLabel *label;
    QTableView *tableView;
    QPushButton *PlusItem;
    QPushButton *MinusItem;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *TableSetting)
    {
        if (TableSetting->objectName().isEmpty())
            TableSetting->setObjectName(QStringLiteral("TableSetting"));
        TableSetting->resize(400, 300);
        buttonBox = new QDialogButtonBox(TableSetting);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 260, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(TableSetting);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 30, 113, 20));
        label = new QLabel(TableSetting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 101, 16));
        tableView = new QTableView(TableSetting);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 70, 381, 131));
        PlusItem = new QPushButton(TableSetting);
        PlusItem->setObjectName(QStringLiteral("PlusItem"));
        PlusItem->setGeometry(QRect(130, 210, 31, 23));
        QIcon icon;
        icon.addFile(QStringLiteral("ico/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PlusItem->setIcon(icon);
        MinusItem = new QPushButton(TableSetting);
        MinusItem->setObjectName(QStringLiteral("MinusItem"));
        MinusItem->setGeometry(QRect(180, 210, 31, 23));
        QIcon icon1;
        icon1.addFile(QStringLiteral("ico/subtract.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MinusItem->setIcon(icon1);
        lineEdit_2 = new QLineEdit(TableSetting);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 220, 113, 20));

        retranslateUi(TableSetting);
        QObject::connect(buttonBox, SIGNAL(accepted()), TableSetting, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TableSetting, SLOT(reject()));

        QMetaObject::connectSlotsByName(TableSetting);
    } // setupUi

    void retranslateUi(QDialog *TableSetting)
    {
        TableSetting->setWindowTitle(QApplication::translate("TableSetting", "Dialog", 0));
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

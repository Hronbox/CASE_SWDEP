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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableSetting
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QPushButton *Plus;
    QPushButton *Minus;
    QPushButton *Cancel;
    QPushButton *Ok;

    void setupUi(QWidget *TableSetting)
    {
        if (TableSetting->objectName().isEmpty())
            TableSetting->setObjectName(QStringLiteral("TableSetting"));
        TableSetting->resize(400, 300);
        label = new QLabel(TableSetting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 111, 16));
        lineEdit = new QLineEdit(TableSetting);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 40, 113, 20));
        tableView = new QTableView(TableSetting);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 70, 361, 141));
        Plus = new QPushButton(TableSetting);
        Plus->setObjectName(QStringLiteral("Plus"));
        Plus->setGeometry(QRect(70, 220, 75, 23));
        Minus = new QPushButton(TableSetting);
        Minus->setObjectName(QStringLiteral("Minus"));
        Minus->setGeometry(QRect(160, 220, 75, 23));
        Cancel = new QPushButton(TableSetting);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(300, 270, 75, 23));
        Ok = new QPushButton(TableSetting);
        Ok->setObjectName(QStringLiteral("Ok"));
        Ok->setGeometry(QRect(210, 270, 75, 23));

        retranslateUi(TableSetting);

        QMetaObject::connectSlotsByName(TableSetting);
    } // setupUi

    void retranslateUi(QWidget *TableSetting)
    {
        TableSetting->setWindowTitle(QApplication::translate("TableSetting", "Form", 0));
        label->setText(QApplication::translate("TableSetting", "\320\235\320\260\320\267\320\260\320\262\320\260\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
        Plus->setText(QApplication::translate("TableSetting", "+", 0));
        Minus->setText(QApplication::translate("TableSetting", "-", 0));
        Cancel->setText(QApplication::translate("TableSetting", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        Ok->setText(QApplication::translate("TableSetting", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class TableSetting: public Ui_TableSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLESETTING_H

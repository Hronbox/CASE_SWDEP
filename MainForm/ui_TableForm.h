/********************************************************************************
** Form generated from reading UI file 'TableForm.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEFORM_H
#define UI_TABLEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableForm
{
public:
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *TableForm)
    {
        if (TableForm->objectName().isEmpty())
            TableForm->setObjectName(QStringLiteral("TableForm"));
        TableForm->resize(124, 160);
        tableView = new QTableView(TableForm);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 30, 121, 91));
        label = new QLabel(TableForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 46, 13));
        pushButton = new QPushButton(TableForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 130, 75, 23));

        retranslateUi(TableForm);

        QMetaObject::connectSlotsByName(TableForm);
    } // setupUi

    void retranslateUi(QWidget *TableForm)
    {
        TableForm->setWindowTitle(QApplication::translate("TableForm", "Form", 0));
        label->setText(QApplication::translate("TableForm", "TextLabel", 0));
        pushButton->setText(QApplication::translate("TableForm", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class TableForm: public Ui_TableForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEFORM_H

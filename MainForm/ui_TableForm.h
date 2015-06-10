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
    QTableView *tableViewWidget;
    QLabel *label;
    QPushButton *pushButtonSetting;

    void setupUi(QWidget *TableForm)
    {
        if (TableForm->objectName().isEmpty())
            TableForm->setObjectName(QStringLiteral("TableForm"));
        TableForm->setWindowModality(Qt::ApplicationModal);
        TableForm->resize(297, 190);
        TableForm->setAutoFillBackground(true);
        tableViewWidget = new QTableView(TableForm);
        tableViewWidget->setObjectName(QStringLiteral("tableViewWidget"));
        tableViewWidget->setGeometry(QRect(-1, 30, 301, 91));
        label = new QLabel(TableForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 111, 16));
        pushButtonSetting = new QPushButton(TableForm);
        pushButtonSetting->setObjectName(QStringLiteral("pushButtonSetting"));
        pushButtonSetting->setGeometry(QRect(10, 130, 75, 23));

        retranslateUi(TableForm);

        QMetaObject::connectSlotsByName(TableForm);
    } // setupUi

    void retranslateUi(QWidget *TableForm)
    {
        TableForm->setWindowTitle(QApplication::translate("TableForm", "\320\236\320\272\320\275\320\276 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
        label->setText(QApplication::translate("TableForm", "<html><head/><body><p>\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213</p></body></html>", 0));
        pushButtonSetting->setText(QApplication::translate("TableForm", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class TableForm: public Ui_TableForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEFORM_H

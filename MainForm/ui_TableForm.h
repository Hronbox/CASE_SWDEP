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
#include <QtWidgets/QFrame>
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
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;

    void setupUi(QWidget *TableForm)
    {
        if (TableForm->objectName().isEmpty())
            TableForm->setObjectName(QStringLiteral("TableForm"));
        TableForm->resize(151, 181);
        tableView = new QTableView(TableForm);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 30, 131, 91));
        label = new QLabel(TableForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 46, 13));
        pushButton = new QPushButton(TableForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 130, 75, 23));
        line = new QFrame(TableForm);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 178, 150, 5));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(TableForm);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 0, 5, 180));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(TableForm);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(148, 0, 5, 180));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(TableForm);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(0, 0, 150, 5));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

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

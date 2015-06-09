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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TableSetting
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableViewSitting;
    QPushButton *PlusItem;
    QPushButton *MinusItem;
    QWidget *tab_2;
    QTableView *tableViewConection;
    QWidget *tab_3;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QDialog *TableSetting)
    {
        if (TableSetting->objectName().isEmpty())
            TableSetting->setObjectName(QStringLiteral("TableSetting"));
        TableSetting->resize(442, 391);
        buttonBox = new QDialogButtonBox(TableSetting);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(270, 350, 156, 23));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget = new QTabWidget(TableSetting);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 421, 281));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableViewSitting = new QTableView(tab);
        tableViewSitting->setObjectName(QStringLiteral("tableViewSitting"));
        tableViewSitting->setGeometry(QRect(16, 5, 351, 192));
        sizePolicy.setHeightForWidth(tableViewSitting->sizePolicy().hasHeightForWidth());
        tableViewSitting->setSizePolicy(sizePolicy);
        PlusItem = new QPushButton(tab);
        PlusItem->setObjectName(QStringLiteral("PlusItem"));
        PlusItem->setEnabled(true);
        PlusItem->setGeometry(QRect(316, 210, 28, 24));
        sizePolicy.setHeightForWidth(PlusItem->sizePolicy().hasHeightForWidth());
        PlusItem->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral("ico/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PlusItem->setIcon(icon);
        MinusItem = new QPushButton(tab);
        MinusItem->setObjectName(QStringLiteral("MinusItem"));
        MinusItem->setGeometry(QRect(350, 210, 28, 24));
        sizePolicy.setHeightForWidth(MinusItem->sizePolicy().hasHeightForWidth());
        MinusItem->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QStringLiteral("ico/subtract.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MinusItem->setIcon(icon1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableViewConection = new QTableView(tab_2);
        tableViewConection->setObjectName(QStringLiteral("tableViewConection"));
        tableViewConection->setGeometry(QRect(30, 20, 351, 201));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        lineEdit = new QLineEdit(TableSetting);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 20, 133, 20));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        label = new QLabel(TableSetting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(18, 23, 95, 16));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        retranslateUi(TableSetting);
        QObject::connect(buttonBox, SIGNAL(rejected()), TableSetting, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), TableSetting, SLOT(accept()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TableSetting);
    } // setupUi

    void retranslateUi(QDialog *TableSetting)
    {
        TableSetting->setWindowTitle(QApplication::translate("TableSetting", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
        PlusItem->setText(QString());
        MinusItem->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TableSetting", "\320\220\321\202\321\200\320\270\320\261\321\203\321\202\321\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TableSetting", "\320\241\320\262\321\217\320\267\320\270", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("TableSetting", "\320\243\320\275\320\270\320\272\320\260\320\273\321\214\320\275\321\213\320\265 \320\277\320\276\320\273\321\217", 0));
        label->setText(QApplication::translate("TableSetting", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
    } // retranslateUi

};

namespace Ui {
    class TableSetting: public Ui_TableSetting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLESETTING_H

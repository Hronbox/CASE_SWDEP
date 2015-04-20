/********************************************************************************
** Form generated from reading UI file 'widgetgenerationscript.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETGENERATIONSCRIPT_H
#define UI_WIDGETGENERATIONSCRIPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_WidgetGenerationScript
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBoxPlugin;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditName;

    void setupUi(QDialog *WidgetGenerationScript)
    {
        if (WidgetGenerationScript->objectName().isEmpty())
            WidgetGenerationScript->setObjectName(QStringLiteral("WidgetGenerationScript"));
        WidgetGenerationScript->resize(400, 300);
        buttonBox = new QDialogButtonBox(WidgetGenerationScript);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBoxPlugin = new QComboBox(WidgetGenerationScript);
        comboBoxPlugin->setObjectName(QStringLiteral("comboBoxPlugin"));
        comboBoxPlugin->setGeometry(QRect(260, 20, 121, 22));
        label = new QLabel(WidgetGenerationScript);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 61, 16));
        label_2 = new QLabel(WidgetGenerationScript);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 131, 16));
        lineEditName = new QLineEdit(WidgetGenerationScript);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));
        lineEditName->setGeometry(QRect(260, 60, 121, 20));

        retranslateUi(WidgetGenerationScript);
        QObject::connect(buttonBox, SIGNAL(accepted()), WidgetGenerationScript, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WidgetGenerationScript, SLOT(reject()));

        QMetaObject::connectSlotsByName(WidgetGenerationScript);
    } // setupUi

    void retranslateUi(QDialog *WidgetGenerationScript)
    {
        WidgetGenerationScript->setWindowTitle(QApplication::translate("WidgetGenerationScript", "Dialog", 0));
        label->setText(QApplication::translate("WidgetGenerationScript", "\320\224\321\200\320\260\320\271\320\262\320\265\321\200:", 0));
        label_2->setText(QApplication::translate("WidgetGenerationScript", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205:", 0));
    } // retranslateUi

};

namespace Ui {
    class WidgetGenerationScript: public Ui_WidgetGenerationScript {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETGENERATIONSCRIPT_H

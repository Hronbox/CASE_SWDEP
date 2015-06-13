/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *createSript;
    QAction *action_6;
    QAction *close;
    QAction *action_8;
    QAction *action_9;
    QWidget *centralWidget;
    QRadioButton *tableRadio;
    QRadioButton *one_to_one;
    QRadioButton *Editing;
    QRadioButton *one_to_N;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QRadioButton *radioMause;
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QRadioButton *radioButtonDelete;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(976, 709);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        createSript = new QAction(MainWindow);
        createSript->setObjectName(QStringLiteral("createSript"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        close = new QAction(MainWindow);
        close->setObjectName(QStringLiteral("close"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QStringLiteral("action_9"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableRadio = new QRadioButton(centralWidget);
        tableRadio->setObjectName(QStringLiteral("tableRadio"));
        tableRadio->setGeometry(QRect(70, 30, 41, 17));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico/table_add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        tableRadio->setIcon(icon);
        one_to_one = new QRadioButton(centralWidget);
        one_to_one->setObjectName(QStringLiteral("one_to_one"));
        one_to_one->setGeometry(QRect(250, 30, 61, 17));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ico/Link-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        one_to_one->setIcon(icon1);
        Editing = new QRadioButton(centralWidget);
        Editing->setObjectName(QStringLiteral("Editing"));
        Editing->setGeometry(QRect(120, 30, 41, 17));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ico/1024px-ArrowCross.svg.png"), QSize(), QIcon::Normal, QIcon::Off);
        Editing->setIcon(icon2);
        one_to_N = new QRadioButton(centralWidget);
        one_to_N->setObjectName(QStringLiteral("one_to_N"));
        one_to_N->setGeometry(QRect(310, 30, 61, 17));
        one_to_N->setIcon(icon1);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 60, 961, 591));
        scrollArea->setContextMenuPolicy(Qt::ActionsContextMenu);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 942, 572));
        scrollArea->setWidget(scrollAreaWidgetContents);
        radioMause = new QRadioButton(centralWidget);
        radioMause->setObjectName(QStringLiteral("radioMause"));
        radioMause->setGeometry(QRect(10, 30, 31, 17));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ico/arrow-cursor-mouse-pixel.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioMause->setIcon(icon3);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 0, 101, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 0, 46, 16));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(60, 0, 3, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(240, 0, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(400, 0, 3, 61));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        radioButtonDelete = new QRadioButton(centralWidget);
        radioButtonDelete->setObjectName(QStringLiteral("radioButtonDelete"));
        radioButtonDelete->setGeometry(QRect(170, 30, 82, 17));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ico/table-delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        radioButtonDelete->setIcon(icon4);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 976, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_3);
        menu->addAction(action_4);
        menu->addAction(close);
        menu_2->addAction(createSript);
        menu_2->addAction(action_6);
        menu_3->addAction(action_8);
        menu_3->addAction(action_9);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CASE_SWDEP", 0));
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        action->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        action_3->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272..", 0));
        action_4->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214", 0));
        createSript->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \321\201\320\272\321\200\320\270\320\277\321\202\320\260", 0));
        action_6->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265  \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        close->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        action_8->setText(QApplication::translate("MainWindow", "\320\240\321\203\320\272\320\276\320\262\320\276\320\264\321\201\321\202\320\262\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0));
        action_9->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
#ifndef QT_NO_TOOLTIP
        tableRadio->setToolTip(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        tableRadio->setStatusTip(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        tableRadio->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        tableRadio->setText(QString());
#ifndef QT_NO_TOOLTIP
        one_to_one->setToolTip(QApplication::translate("MainWindow", "\320\241\320\262\321\217\320\267\321\214 1:1", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        one_to_one->setStatusTip(QApplication::translate("MainWindow", "\320\241\320\262\321\217\320\267\321\214 1:1", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        one_to_one->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        one_to_one->setText(QApplication::translate("MainWindow", "1:1", 0));
#ifndef QT_NO_TOOLTIP
        Editing->setToolTip(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Editing->setStatusTip(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        Editing->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        Editing->setText(QString());
#ifndef QT_NO_TOOLTIP
        one_to_N->setToolTip(QApplication::translate("MainWindow", "\320\241\320\262\321\217\320\267\321\214 1:N", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        one_to_N->setStatusTip(QApplication::translate("MainWindow", "\320\241\320\262\321\217\320\267\321\214 1:N", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        one_to_N->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        one_to_N->setText(QApplication::translate("MainWindow", "1:N", 0));
#ifndef QT_NO_TOOLTIP
        radioMause->setToolTip(QApplication::translate("MainWindow", "\320\234\321\213\321\210\321\214", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        radioMause->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        radioMause->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        radioMause->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\261\320\276\321\202\320\260 \321\201 \321\202\320\260\320\261\320\273\320\270\321\206\320\260\320\274\320\270", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\241\320\262\321\217\320\267\320\270", 0));
#ifndef QT_NO_TOOLTIP
        radioButtonDelete->setToolTip(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        radioButtonDelete->setStatusTip(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", 0));
#endif // QT_NO_STATUSTIP
        radioButtonDelete->setText(QString());
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\270\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

#-------------------------------------------------
#
# Project created by QtCreator 2015-04-05T18:36:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainForm
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    containerwidget.cpp \
    tableformwidget.cpp \
    tablesetting.cpp

HEADERS  += mainwindow.h \
    containerwidget.h \
    tableformwidget.h \
    tablesetting.h

FORMS    += mainwindow.ui \
    TableForm.ui \
    tablesetting.ui

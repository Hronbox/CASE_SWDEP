#-------------------------------------------------
#
# Project created by QtCreator 2015-04-05T18:36:50
#
#-------------------------------------------------
include(insertremove/insertremove.pri)

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainForm
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    containerwidget.cpp \
    tableformwidget.cpp \
    tablesetting.cpp \
    typeattreditordelegate.cpp

HEADERS  += mainwindow.h \
    containerwidget.h \
    tableformwidget.h \
    tablesetting.h \
    typeattreditordelegate.h

FORMS    += mainwindow.ui \
    TableForm.ui \
    tablesetting.ui

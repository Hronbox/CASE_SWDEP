#-------------------------------------------------
#
# Project created by QtCreator 2015-04-20T16:14:36
#
#-------------------------------------------------

QT      += core gui sql

TARGET = Sqlite
TEMPLATE = lib

DLLDESTDIR = ../DLL_DIR

DEFINES += SQLITE_LIBRARY

SOURCES += sqlite.cpp

HEADERS += sqlite.h\
        sqlite_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

#-------------------------------------------------
#
# Project created by QtCreator 2015-04-20T16:15:39
#
#-------------------------------------------------

QT       += core gui sql

TARGET = Postgresql
TEMPLATE = lib

DLLDESTDIR = ../DLL_DIR

DEFINES += POSTGRESQL_LIBRARY

SOURCES += postgresql.cpp

HEADERS += postgresql.h\
        postgresql_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

#-------------------------------------------------
#
# Project created by QtCreator 2016-07-05T21:01:01
#
#-------------------------------------------------

QT       += core gui widgets

TARGET = Ecclesia

TEMPLATE = app

SOURCES += main.cpp\
        desktop.cpp \
    database/database.cpp \
    forms/cad/comunid.cpp

HEADERS  += desktop.h \
    database/database.h \
    forms/cad/comunid.h

FORMS    += desktop.ui \
    forms/cad/comunid.ui

QMAKE_CXXFLAGS += -std=gnu++14

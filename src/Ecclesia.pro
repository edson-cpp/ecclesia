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
    diocese.cpp

HEADERS  += desktop.h \
    diocese.h

FORMS    += desktop.ui \
    diocese.ui

QMAKE_CXXFLAGS += -std=gnu++14

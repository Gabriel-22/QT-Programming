#-------------------------------------------------
#
# Project created by QtCreator 2018-01-04T11:57:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyGui
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    ../Introduction2/test.cpp

HEADERS  += dialog.h \
    ../Introduction2/test.h

FORMS    += dialog.ui

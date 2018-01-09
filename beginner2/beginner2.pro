TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    bmi.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    bmi.h


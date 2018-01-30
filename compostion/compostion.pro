TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    birthday.cpp \
    people.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    birthday.h \
    people.h


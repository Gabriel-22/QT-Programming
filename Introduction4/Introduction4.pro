TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    example.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    example.h


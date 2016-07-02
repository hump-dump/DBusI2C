#-------------------------------------------------
#
# Project created by QtCreator 2016-07-02T10:39:58
#
#-------------------------------------------------

QT       += core dbus
QT       -= gui

TARGET = DBusI2C
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    I2CDBusAdaptor.cpp

HEADERS += \
    I2CDBusAdaptor.hpp

CONFIG   += c++11

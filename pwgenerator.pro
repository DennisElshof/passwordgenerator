#-------------------------------------------------
#
# Project created by QtCreator 2016-09-18T13:57:23
#
#-------------------------------------------------

QT       += core gui

CONFIG +=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pwgenerator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    randomnumbergenerator.cpp \
    passwordrequirements.cpp \
    puttowindow.cpp

HEADERS  += mainwindow.h \
    randomnumbergenerator.h \
    passwordrequirements.h \
    puttowindow.h

FORMS    += mainwindow.ui

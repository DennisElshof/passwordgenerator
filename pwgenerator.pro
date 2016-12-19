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
    puttowindow.cpp \
    errormessage.cpp \
    errordialog.cpp \
    generatepassword.cpp \
    randomgenerators.cpp

HEADERS  += mainwindow.h \
    randomnumbergenerator.h \
    passwordrequirements.h \
    puttowindow.h \
    errormessage.h \
    errordialog.h \
    generatepassword.h \
    randomgenerators.h

FORMS    += mainwindow.ui \
    errordialog.ui

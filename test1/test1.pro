#-------------------------------------------------
#
# Project created by QtCreator 2016-02-18T05:11:13
#
#-------------------------------------------------

QT       += core gui
DEFINES += __STDC_FORMAT_MACROS


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test1
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
##    ../one/ft_add.c \
##    ../one/ft_encrypt.c \
##    ../one/ft_search.c \
##    ../one/main.c
    dataclass.cpp \
    ft_encrypt.cpp \
    ft_stuff.cpp \
    form2.cpp \
    ssh1.cpp

INCLUDEPATH += /usr/include/c++/4.8/
INCLUDEPATH += /usr/include/x86_64-linux-gnu/c++/4.8/
QMAKE_CXXFLAGS += -std=c++0x
LIBS += -L/opt/local/lib \
        -lsqlite3 \
        -lssh
CONFIG += c++11

HEADERS  += mainwindow.h \
    dataclass.h \
    ugl.h \
    modelviewdialog.h \
    form2.h \
    qsshsocket.h

FORMS    += mainwindow.ui \
    form2.ui

DISTFILES += \
    test.txt

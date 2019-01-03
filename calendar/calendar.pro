#-------------------------------------------------
#
# Project created by QtCreator 2018-07-15T21:03:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = calendar
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    month_search.cpp \
    memo.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    month_search.h \
    memo.h

FORMS    += mainwindow.ui \
    dialog.ui \
    month_search.ui \
    memo.ui

DISTFILES +=

RESOURCES += \
    back.qrc

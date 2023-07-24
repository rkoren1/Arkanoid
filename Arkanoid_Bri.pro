#-------------------------------------------------
#
# Project created by QtCreator 2015-10-24T13:38:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Arkanoid_Bri
TEMPLATE = app


SOURCES += main.cpp \
    igra.cpp \
    ploscica.cpp \
    zidaki.cpp \
    zoga.cpp \
    menu.cpp \
    superpower.cpp \
    levels.cpp \
    mapkreator.cpp

HEADERS  += \
    igra.h \
    ploscica.h \
    zoga.h \
    zidaki.h \
    menu.h \
    superpower.h \
    levels.h \
    mapkreator.h

FORMS    += \
    menu.ui \
    levels.ui \
    mapkreator.ui

DISTFILES +=

RESOURCES += \
    slike.qrc

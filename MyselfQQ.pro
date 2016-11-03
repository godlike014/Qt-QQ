#-------------------------------------------------
#
# Project created by QtCreator 2016-10-31T10:37:33
#
#-------------------------------------------------

QT       += core gui\
        network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyselfQQ
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    drawer.cpp \
    server.cpp \
    client.cpp

HEADERS  += widget.h \
    drawer.h \
    server.h \
    client.h

FORMS    += widget.ui \
    server.ui \
    client.ui

RESOURCES += \
    myres.qrc
RC_FILE = myapp.rc
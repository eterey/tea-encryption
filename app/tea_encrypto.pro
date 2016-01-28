QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tea_encrypto
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    teaencryptor.cpp

HEADERS  += mainwindow.h \
    teaencryptor.h

FORMS    += mainwindow.ui

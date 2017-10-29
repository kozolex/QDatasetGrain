#-------------------------------------------------
#
# Project created by QtCreator 2017-10-26T18:19:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QDatasetGrain
TEMPLATE = app


DEFINES += QT_DEPRECATED_WARNINGS




SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

INCLUDEPATH += F:\LIB\opencv_old\build\include

LIBS += F:\LIB\opencv_old\build\x86\vc12\bin\opencv_core2410.dll
LIBS += F:\LIB\opencv_old\build\x86\vc12\bin\opencv_highgui2410.dll
#LIBS += F:\LIB\opencv_old\build\x86\vc12\bin\opencv_imgcodecs2410.dll
LIBS += F:\LIB\opencv_old\build\x86\vc12\bin\opencv_imgproc2410.dll
LIBS += F:\LIB\opencv_old\build\x86\vc12\bin\opencv_features2d2410.dll
LIBS += F:\LIB\opencv_old\build\x86\vc12\bin\opencv_calib3d2410.dll


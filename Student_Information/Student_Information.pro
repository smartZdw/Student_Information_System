#-------------------------------------------------
#
# Project created by QtCreator 2018-10-10T16:37:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Student_Information
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    teacher.cpp \
    student.cpp \
    selectstuinfo.cpp \
    stuinfo.cpp

HEADERS  += mainwindow.h \
    teacher.h \
    student.h \
    selectstuinfo.h \
    stuinfo.h

FORMS    += mainwindow.ui \
    teacher.ui \
    student.ui \
    selectstuinfo.ui \
    stuinfo.ui

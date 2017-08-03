#-------------------------------------------------
#
# Project created by QtCreator 2017-07-20T17:27:42
#
#-------------------------------------------------



QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = app_icons

TEMPLATE = app

#VERSION = 5

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

#ICON +=  ../../../../Qt/qtEsp8266SerialPort/QtEsp8266SerialPort/qtcreator.icns

ICON += icons/logo.icns
CONFIG += qtc_runnable
#RC_ICON = icons/icon.ico

#CONFIG-=app_bundle

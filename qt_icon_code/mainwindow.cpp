#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>
#include <QFile>
#include <qdebug.h>
#include <QPalette>
#include <QColor>
#include <QIcon>
#include <QSize>
#include <QProcess>
#include <QPushButton>
//#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    set_icons();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void  MainWindow::set_icons(){
    QIcon icon(_LINK_USER"/qt_icons/qt_icon_code/icons/logo.icns");
    QIcon icon2(_LINK_USER"/qt_icons/qt_icon_code/icons/power.png");
    QSize size(48,48);

    ui->pushButton->setWindowOpacity(0.1);
    ui->pushButton_2->setWindowOpacity(0.1);
    ui->pushButton_3->setWindowOpacity(0.1);
    ui->pushButton_4->setWindowOpacity(0.1);
    ui->pushButton_5->setWindowOpacity(0.1);
    ui->pushButton_6->setWindowOpacity(0.1);

    ui->pushButton->setIconSize(size);
    ui->pushButton->setIcon(icon2);
    ui->pushButton->setStyleSheet(_GRAY_COLOUR);
    ui->pushButton_2->setIconSize(size);
    ui->pushButton_2->setIcon(icon);
    ui->pushButton_2->setStyleSheet(_GRAY_COLOUR);
    icon=QIcon(_LINK_USER"/qt_icons/qt_icon_code/icons/icon.icns");
    ui->pushButton_3->setIconSize(size);
    ui->pushButton_3->setIcon(icon);
    ui->pushButton_3->setStyleSheet(_GRAY_COLOUR);
    icon=QIcon(_LINK_USER"/qt_icons/qt_icon_code/icons/blueluma.png");
    ui->pushButton_4->setIconSize(size);
    ui->pushButton_4->setIcon(icon);
    ui->pushButton_4->setStyleSheet(_GRAY_COLOUR);
    icon=QIcon(_LINK_USER"/qt_icons/qt_icon_code/icons/sum_white.png");
    ui->pushButton_5->setIconSize(size);
    ui->pushButton_5->setIcon(icon);
    ui->pushButton_5->setStyleSheet(_GRAY_COLOUR);
    icon=QIcon(_LINK_USER"/qt_icons/qt_icon_code/icons/usb_white.png");
    ui->pushButton_6->setIconSize(size);
    ui->pushButton_6->setIcon(icon);
    ui->pushButton_6->setStyleSheet(_GRAY_COLOUR);



QPushButton* button_siri= new QPushButton(this);


size=QSize(64,64);
icon=QIcon(_LINK_USER"/qt_icons/qt_icon_code/icons/siri_log.png");
button_siri->setFixedSize(120,96);

button_siri->move((600-160)/2, 240);
button_siri->setIconSize(size);
//button_siri->setText(tr("Siri"));
button_siri->setStyleSheet(_GRAY_COLOUR);
button_siri->setIcon(icon);

//button_siri->move(QApplication::desktop()->screen()->rect().center() - w.rect().center());


//button_siri->setWindowIcon(icon);
button_siri->show();
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    QProcess *process = new QProcess();
    process->start("/bin/rm /Users/leoamaya/Documents/SourceCode/Qt/qt_icons/build-qt_icons_splash-Desktop_Qt_5_9_0_clang_64bit-Debug/copia.png");
    process->waitForFinished();
    qDebug()<<"Dicom";
}

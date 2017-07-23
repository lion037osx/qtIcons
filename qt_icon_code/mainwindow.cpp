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

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QIcon icon("/Users/leoamaya/Documents/SourceCode/Qt/qt_icons/qt_icon_code/icons/save.png");
    QIcon icon2("/Users/leoamaya/Documents/SourceCode/Qt/qt_icons/qt_icon_code/icons/network.png");
    QSize size(36,36);

    ui->pushButton->setIconSize(size);
    ui->pushButton->setIcon(icon2);
    ui->pushButton->setStyleSheet(_GRAY_COLOUR);

    ui->pushButton_2->setIconSize(size);
    ui->pushButton_2->setIcon(icon);
    ui->pushButton_2->setStyleSheet(_GRAY_COLOUR);

    ui->pushButton_3->setIconSize(size);
    ui->pushButton_3->setIcon(icon);
    ui->pushButton_3->setStyleSheet(_GRAY_COLOUR);

    ui->pushButton_4->setIconSize(size);
    ui->pushButton_4->setIcon(icon);
    ui->pushButton_4->setStyleSheet(_GRAY_COLOUR);

    ui->pushButton_5->setIconSize(size);
    ui->pushButton_5->setIcon(icon);
    ui->pushButton_5->setStyleSheet(_GRAY_COLOUR);

    ui->pushButton_6->setIconSize(size);
    ui->pushButton_6->setIcon(icon);
    ui->pushButton_6->setStyleSheet(_GRAY_COLOUR);

}

MainWindow::~MainWindow()
{
    delete ui;
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

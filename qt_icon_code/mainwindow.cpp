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
#include <QPixmap>
#include <QLabel>

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
QString link;
#ifdef Q_OS_LINUX
    link =qApp->applicationDirPath() + "/../qt_icon_code/folder_background/bg_cool.png";
#endif

#ifdef Q_OS_MACOS
    link =qApp->applicationDirPath()+ "/../../../../qt_icon_code/folder_background/bg_cool.png";
#endif


 qDebug() <<"link: "<< link;
    QPixmap pixmap(link );



    ui->label_background->setPixmap(pixmap);

    QIcon icon;
    QSize size(48,48);

     ui->pushButton->setFlat(true);
     ui->pushButton_2->setFlat(true);
     ui->pushButton_3->setFlat(true);
     ui->pushButton_4->setFlat(true);
     ui->pushButton_5->setFlat(true);
     ui->pushButton_6->setFlat(true);

    ui->pushButton->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    ui->pushButton_2->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    ui->pushButton_3->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    ui->pushButton_4->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    ui->pushButton_5->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    ui->pushButton_6->setStyleSheet("* { background-color: rgba(0,0,0,10) }");

    ui->pushButton->setIconSize(size);
    ui->pushButton_2->setIconSize(size);
    ui->pushButton_3->setIconSize(size);
    ui->pushButton_4->setIconSize(size);
    ui->pushButton_5->setIconSize(size);
    ui->pushButton_6->setIconSize(size);

    QString linkIcon;
    linkIcon =qApp->applicationDirPath() + "/../../../..";

        #ifdef Q_OS_LINUX
         icon=QIcon(_LINK_USER + "/qt_icon_code/icons/power.png");
         ui->pushButton->setIcon(icon);
         icon=QIcon(_LINK_USER + "/qt_icon_code/icons/logo.png");
         ui->pushButton_2->setIcon(icon);
         icon=QIcon(_LINK_USER + "/qt_icon_code/icons/icon.png");
         ui->pushButton_3->setIcon(icon);
         icon=QIcon(_LINK_USER + "/qt_icon_code/icons/blueluma.png");
         ui->pushButton_4->setIcon(icon);
         icon=QIcon(_LINK_USER + "/qt_icon_code/icons/sum_white.png");
         ui->pushButton_5->setIcon(icon);
         icon=QIcon(_LINK_USER + "/qt_icon_code/icons/usb_white.png");
         ui->pushButton_6->setIcon(icon);

         QPushButton* button_siri= new QPushButton(this);

         size=QSize(48,48);
         icon=QIcon(_LINK_USER"/qt_icon_code/icons/siri_log.png");
     #endif

   #ifdef Q_OS_MACOS

         icon=QIcon(linkIcon + "/qt_icon_code/icons/power.png");

    ui->pushButton->setIcon(icon);
    icon=QIcon(linkIcon + "/qt_icon_code/icons/logo.png");
    ui->pushButton_2->setIcon(icon);
    icon=QIcon(linkIcon +"/qt_icon_code/icons/icon.png");
    ui->pushButton_3->setIcon(icon);
    icon=QIcon(linkIcon +"/qt_icon_code/icons/blueluma.png");
    ui->pushButton_4->setIcon(icon);
    icon=QIcon(linkIcon +"/qt_icon_code/icons/sum_white.png");
    ui->pushButton_5->setIcon(icon);
    icon=QIcon(linkIcon +"/qt_icon_code/icons/usb_white.png");
    ui->pushButton_6->setIcon(icon);

    QPushButton* button_siri= new QPushButton(this);

    size=QSize(48,48);
    icon=QIcon(_LINK_USER"/qt_icon_code/icons/siri_log.png");
#endif


    button_siri->setFixedSize(120,96);
    button_siri->move(20,(640-24-96));
    button_siri->setIconSize(size);
    button_siri->setFlat(true);
    button_siri->setStyleSheet("* { background-color: rgba(0,0,0,10) }");
    button_siri->setIcon(icon);
    button_siri->show();
}

void MainWindow::on_pushButton_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    QProcess *process = new QProcess();
     #ifdef Q_OS_MACOS
    process->start( "/bin/rm " + qApp->applicationDirPath() + "copia.png");
#endif
      #ifdef Q_OS_LINUX
    process->start( "/bin/rm " + _LINK_USER + "/copia.png");
#endif

    process->waitForFinished();
    qDebug()<<"Dicom";
}

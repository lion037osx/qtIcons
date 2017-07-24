#include "mainwindow.h"
//#include <QApplication>
#include <QDesktopWidget>
#include <QSplashScreen>
#include <QTimer>
#include <QLabel>
#include <QStatusBar>
#include <QDebug>
#include <QIcon>

int main(int argc, char *argv[])
{
QApplication a(argc, argv);

//rm -R ../build-qt_icons_splash*


QSplashScreen *splash=new QSplashScreen;

#ifdef Q_OS_LINUX
qDebug()<<"LINUX OS";
splash->setPixmap(QPixmap(_LINK_USER"/qt_aux_coode/qt_aux/network.png"));
#endif

#ifdef Q_OS_MACOS
qDebug()<<"MAC OS";
//splash->setPixmap(QPixmap(_LINK_USER"/qt_icons/qt_icon_code/icons/network.png"));
splash->setPixmap(QPixmap(_LINK_USER"/qt_icons/qt_icon_code/icons/animal.png"));
#endif

splash->setWindowOpacity(0.95);
splash->show();
QTimer::singleShot(1000,splash,SLOT(close()));

MainWindow w;

#ifdef Q_OS_LINUX
QIcon icon(_LINK_USER"/qt_aux_coode/qt_aux/icon.png");
#endif

#ifdef Q_OS_MACOS
QIcon icon(_LINK_USER"/qt_icons/qt_icon_code/icons/icon.png");
#endif

w.setWindowIcon(icon);
w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
QTimer::singleShot(1000,&w,SLOT(show()));

return a.exec();
}

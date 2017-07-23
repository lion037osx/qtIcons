#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QSplashScreen>
#include <QTimer>
#include <QLabel>
#include <QStatusBar>


int main(int argc, char *argv[])
{
QApplication a(argc, argv);

//rm -R ../build-qt_icons_splash*

/*
QSplashScreen *splash=new QSplashScreen;
splash->setPixmap(QPixmap("/home/optimus/Documentos/source_code/qt_aux_coode/qt_aux/network.png"));
splash->setWindowOpacity(0.7);
splash->show();
QTimer::singleShot(1000,splash,SLOT(close()));
*/
MainWindow w;
/*
QIcon icon("/home/optimus/Documentos/source_code/qt_aux_coode/qt_aux/icon.png");
w.setWindowIcon(icon);
w.move(QApplication::desktop()->screen()->rect().center() - w.rect().center());
QTimer::singleShot(1000,&w,SLOT(show()));
*/
w.show();
return a.exec();
}

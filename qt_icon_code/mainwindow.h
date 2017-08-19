#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>

#define _GRAY_COLOUR "background-color: rgb(90,90,90)"


#if defined(Q_OS_MACOS)

#define _LINK_USER qApp->applicationDirPath()+"/../../../.." //"/Users/leoamaya/Documents/SourceCode/Qt"

#endif

#if defined(Q_OS_LINUX)
#define _LINK_USER "/home/optimus/Documentos/source_code/qt/qt_icons"
#endif

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void set_icons();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

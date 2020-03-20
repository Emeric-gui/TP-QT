#include <QApplication>
#include "Window.h"
#include "ex1.h"


void exercice4(int argc, char **argv){
    QApplication app (argc, argv);
//    QWidget * widget = new QWidget();
    auto* wind = new Window();
    wind->show();
    app.exec();

}




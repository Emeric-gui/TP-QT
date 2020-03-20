#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include "MyMainWindow.h"

void exercice3(int argc, char **argv){
    QApplication app (argc, argv);

    QWidget * widget = new QWidget();
    widget->setFixedSize(100, 100);
    QPushButton* button = new QPushButton("fils", widget);

    button->setGeometry(10,10,80,30);
    widget->show();
    app.exec();

}

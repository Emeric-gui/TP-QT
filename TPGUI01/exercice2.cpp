#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include "MyMainWindow.h"

void exercice2(int argc, char **argv)
{
    QApplication app (argc, argv);
    MyMainWindow window;
    window.setFixedSize(500, 500);
    window.show();
    QWidget * widget = new QWidget();
    QVBoxLayout* mainlayout = new QVBoxLayout();


    QPushButton* button  = new QPushButton("Parent");
    QPushButton* button2 = new QPushButton("fils", button);
    mainlayout->addWidget(button);

    widget->setLayout(mainlayout);

    window.setCentralWidget(widget);
    app.exec();
}
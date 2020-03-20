#include "Window.h"

Window::Window(QWidget* parent) : QWidget(parent) {
    button = new QPushButton("Hell", parent);
    setFixedSize(100, 50);
    button->setGeometry(10,10,80,30);
    setWindowTitle("Ma Fenetre");
}
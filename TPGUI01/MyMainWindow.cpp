#include "MyMainWindow.h"
#include <QLabel>
MyMainWindow::MyMainWindow( QWidget* parent ) : QMainWindow(parent) {
// on instancie un QLabel en indiquant son parent (this => moi)
    this->label = new QLabel("Je suis un QLabel", this);
// etc ...
// on fixe le widget QLabel au centre de la fenêtre
    setCentralWidget(this->label);
}
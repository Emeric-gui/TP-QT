#include <QApplication>
#include <QPushButton>
#include "ex1.h"
void exercice1(int argc, char **argv)
{
 QApplication app (argc, argv);
// QPushButton button ("Hello world !");
// button.show();
 QPushButton button2 ("");
 button2.setText("Bonsoir");
 button2.setToolTip("HELLO");
 button2.show();
 QFont ecriture("Courier", 16, 2);
 button2.setFont(ecriture);

 app.exec();
}
#include <iostream>
#include <QApplication>
#include "SQLClientWindow.h"
#include "ButtonsPanel.h"
#include "ConfigurationDialog.h"

int main(int argc, char** argv) {
    QApplication app (argc, argv);
    ButtonsPanel* buttons = new ButtonsPanel();
    SQLClientWindow* window = new SQLClientWindow(buttons);
    window->show();
    ConfigurationDialog* dial =new ConfigurationDialog();
    dial->show();
    app.exec();
    return 0;
}

//
// Created by Yncrea on 23/02/2020.
//

#include <QHBoxLayout>
#include "ButtonsPanel.h"

ButtonsPanel::ButtonsPanel(){
    config = new QPushButton("Config");
    connect = new QPushButton("Connect");
    disconnect = new QPushButton("Disconnect");
    QHBoxLayout* layout1H = new QHBoxLayout();
    layout1H->addWidget(config);
    layout1H->addWidget(connect);
    layout1H->addWidget(disconnect);
    setLayout(layout1H);
}

ButtonsPanel::~ButtonsPanel(){

}
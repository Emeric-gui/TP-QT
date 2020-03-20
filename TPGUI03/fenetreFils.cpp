//
// Created by Yncrea on 20/03/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "fenetreFils.h"
#include "fenetre.h"

#include <iostream>

fenetreFils::fenetreFils(){
    this->setFixedSize(200, 200);
    QVBoxLayout* layout = new QVBoxLayout();
    button = new QPushButton("fils");
    button2 = new QPushButton("GO Exo1");
    button->setGeometry(10,10,80,30);
//    button->setMinimumSize(180,30);
    text = new QTextEdit("texte initial");
    layout->addWidget(button);
    layout->addWidget(button2);
    layout->addWidget(text);


    this->setLayout(layout);
    this->show();
//    connect(button, SIGNAL(clicked()), this, SLOT(close()));
//    connect(button, SIGNAL(clicked()), this, SLOT(printInfo_debut()));
    connect(button, SIGNAL(clicked()), this, SLOT(printInfo_fin()));
    connect(button2, SIGNAL(clicked()), this, SLOT(displayProgr()));
}

void fenetreFils::printInfo_debut(){
    click++;
    button->setText(QString("Example %1").arg(click));
    std::cout<<"Example"<<click<<std::endl;
}

void fenetreFils::printInfo_fin() {
    click++;
    button->setText("Example");
    text->insertPlainText(QString("Example %1 \n").arg(click));
    std::cout<<"Example"<<click<<std::endl;

}

void fenetreFils::displayProgr() {
    fenetre* base = new fenetre();
    base->show();
}

fenetreFils::~fenetreFils() {}
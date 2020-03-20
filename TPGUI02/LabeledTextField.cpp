//
// Created by Yncrea on 23/02/2020.
//

#include <QHBoxLayout>
#include "LabeledTextField.h"

LabeledTextField::LabeledTextField(QString text, QWidget* parent): QWidget(parent) {
    label = new QLabel(text);
    texte = new QTextEdit();
    QTextEdit* texte1 = new QTextEdit();
    QTextEdit* texte12 = new QTextEdit();
    texte->setMaximumHeight(20);
    QHBoxLayout* layout2H = new QHBoxLayout();
    layout2H->addWidget(label);
    layout2H->addWidget(texte);
    layout2H->addWidget(texte12);
//    this->setLayout(layout2H);
//new test
    this->setLayout(layout2H);
    //test
    //test
}
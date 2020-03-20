#include "ConfigurationDialog.h"


ConfigurationDialog::ConfigurationDialog(){

    QString text1 = "IP Address";
    QString text2 = "User";
    QString text3 = "Password";
    LabeledTextField* field1 = new LabeledTextField(text1);
    LabeledTextField* field2 = new LabeledTextField(text2);
    LabeledTextField* field3 = new LabeledTextField(text3);

    QBoxLayout* vert = new QVBoxLayout();
    vert->addWidget(field1);
    vert->addWidget(field2);
    vert->addWidget(field3);
    this->setLayout(vert);

}
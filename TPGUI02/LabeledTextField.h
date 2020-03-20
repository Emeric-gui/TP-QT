//
// Created by Yncrea on 23/02/2020.
//

#ifndef TPGUI02_LABELEDTEXTFIELD_H
#define TPGUI02_LABELEDTEXTFIELD_H


#include <QTextEdit>
#include <QLabel>
#include <QVBoxLayout>

class LabeledTextField : public QWidget {
private:
    QLabel* label;
    QTextEdit* texte;

public:
    LabeledTextField(QString text, QWidget* parent = nullptr);
    virtual ~LabeledTextField(){};
};


#endif //TPGUI02_LABELEDTEXTFIELD_H



#ifndef TPGUI03_FENETREFILS_H
#define TPGUI03_FENETREFILS_H

#include <QWidget>
#include <QPushButton>
#include <QtWidgets/QTextEdit>

class fenetreFils : public QWidget{
    Q_OBJECT
private:
    QPushButton* button;
    QPushButton* button2;
    QTextEdit* text;
    int click = 0;

public:
    fenetreFils();
    virtual ~fenetreFils();
public slots:
    void printInfo_debut();
    void printInfo_fin();
    void displayProgr();

};


#endif //TPGUI03_FENETREFILS_H

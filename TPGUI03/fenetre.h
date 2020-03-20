#ifndef TPGUI03_FENETRE_H
#define TPGUI03_FENETRE_H


#include <QObject>
#include <QWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>

class fenetre : public QWidget {
    Q_OBJECT
private:
    QProgressBar* bar;
    QSlider* qslider;
public:
    fenetre();


};


#endif //TPGUI03_FENETRE_H

#include <QWidget>
#include <QPushButton>
#ifndef TPGUI02_WINDOW_H
#define TPGUI02_WINDOW_H


class Window : public QWidget{
Q_OBJECT
public:
    Window( QWidget* parent= 0 );
    virtual ~Window(){};

private :
    QPushButton* button;


};


#endif //TPGUI02_WINDOW_H

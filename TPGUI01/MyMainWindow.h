#ifndef TPGUI02_MYMAINWINDOW_H
#define TPGUI02_MYMAINWINDOW_H


#include <QMainWindow>
#include <QLabel>

class MyMainWindow : public QMainWindow{
Q_OBJECT
public:
    MyMainWindow( QWidget* parent= nullptr );
    virtual ~MyMainWindow(){};
private:
    QLabel* label;
};


#endif //TPGUI02_MYMAINWINDOW_H

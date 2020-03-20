//
// Created by Yncrea on 23/02/2020.
//

#ifndef TPGUI02_BUTTONSPANEL_H
#define TPGUI02_BUTTONSPANEL_H


#include <QWidget>
#include <QPushButton>

class ButtonsPanel : public QWidget{
private:
    QPushButton* config;
    QPushButton* connect;
    QPushButton* disconnect;
public:
    ButtonsPanel();
    virtual ~ButtonsPanel();

};


#endif //TPGUI02_BUTTONSPANEL_H

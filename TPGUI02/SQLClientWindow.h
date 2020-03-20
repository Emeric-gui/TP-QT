//
// Created by Yncrea on 23/02/2020.
//

#ifndef TPGUI02_SQLCLIENTWINDOW_H
#define TPGUI02_SQLCLIENTWINDOW_H


#include <QMainWindow>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QTableWidget>
#include <QHeaderView>
#include "ButtonsPanel.h"

class SQLClientWindow : public QMainWindow{
    Q_OBJECT
public:
    SQLClientWindow(ButtonsPanel* button);
    virtual ~SQLClientWindow();

private:
    QTextEdit* notificationPanel;
    QTableWidget* resultTable;

};


#endif //TPGUI02_SQLCLIENTWINDOW_H

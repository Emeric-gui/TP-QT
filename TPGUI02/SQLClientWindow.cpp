#include "SQLClientWindow.h"

SQLClientWindow::SQLClientWindow(ButtonsPanel* button){
    setWindowTitle("SQL CLient");
    setMinimumSize(600,400);

    button = new ButtonsPanel();
    QWidget* widget= new QWidget();
    QVBoxLayout* mainlayout = new QVBoxLayout();
    notificationPanel = new QTextEdit();
    resultTable = new QTableWidget(5,3);

    resultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    mainlayout->addWidget(button);
    mainlayout->addWidget(notificationPanel);
    mainlayout->addWidget(resultTable);
    widget->setLayout(mainlayout);
    setCentralWidget(widget);



}

SQLClientWindow::~SQLClientWindow() {

}
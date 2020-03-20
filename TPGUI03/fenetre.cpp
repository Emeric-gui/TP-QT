//
// Created by Yncrea on 18/03/2020.
//

#include "fenetre.h"
#include <QVBoxLayout>


fenetre::fenetre() {

    setWindowTitle("IHM");
    this->setMinimumSize(200,200);
    QVBoxLayout* layout = new QVBoxLayout();

    bar = new QProgressBar();
    bar->setRange(0, 100);
    bar->setValue(0);
    bar->setGeometry(10, 10, 180, 30);

    qslider = new QSlider(Qt::Horizontal);
    qslider->setRange(0, 100);
    qslider->setValue(0);
    qslider->setGeometry(10, 40, 180, 30);

    layout->addWidget(bar);
    layout->addWidget(qslider);
    this->setLayout(layout);

    connect(qslider, SIGNAL(valueChanged(int)), bar, SLOT(setValue(int)));


}


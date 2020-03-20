#include <QApplication>
#include "fenetre.h"
#include "fenetreFils.h"

int main(int argc, char** argv) {

        QApplication app (argc, argv);
//        fenetre base;
//        base.show();
        fenetreFils fils;
        fils.show();
        return app.exec();

}

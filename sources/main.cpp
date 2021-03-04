#include <QApplication>
#include <QPushButton>
#include "MaFenetre.h"
int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MaFenetre maFenetre;
    maFenetre.show();

    return QApplication::exec();
}

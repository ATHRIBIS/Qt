#include <QApplication>
#include <QPushButton>

#include "MaFenetre.h"

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);
    MaFenetre fenetre;
    fenetre.show();
    return QApplication::exec();
}

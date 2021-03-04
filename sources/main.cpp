#include <QApplication>
#include "class/MyWindow.h" //Contenant notre constructeur de fenetre principale

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);

    /*
     * On fait appel a notre classe héritant de QWidget
     */
    MyWindow window; //On créer
    window.show(); //On affiche

    return QApplication::exec();
}

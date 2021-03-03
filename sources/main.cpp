#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Bonjour !");

    /*
     * Création d'une police
     */
    QFont maPolice("Courier");

    /*
     * Création d'un bouton
     */
    button.setText("Bonsoir la Vendée !"); //Set un texte
    button.setToolTip("C'est la Vendée !");
    button.setFont(maPolice);
    button.setFont(QFont("Courier")); //On défini directement ici l'objet QFont

    button.show();
    button.setBaseSize(50, 100);

    return QApplication::exec();
}

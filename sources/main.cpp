#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Bonjour !");

    /*
     * Création d'un bouton
     */
    button.setText("Bonsoir la Vendée !"); //Set un texte
    button.setToolTip("C'est la Vendée !");
    button.setFont(QFont("Courier", 20, QFont::Bold, true)); //On défini directement ici l'objet QFont
    button.setCursor(Qt::BusyCursor);

    button.show();
    button.setBaseSize(300, 100);

    return QApplication::exec();
}

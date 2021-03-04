#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);

    QWidget fenetre; //Création d'un widget qui servira de fenêtre
    fenetre.setFixedSize(300, 150);

    /*
     * Créatoin du bouton dans la fenêtre
     */
    QPushButton button("Pimp mon button!", &fenetre); //Création du bouton
    button.setFont(QFont("Courier"));
    button.setCursor(QCursor(Qt::BitmapCursor));
    button.setGeometry(50, 50, 200, 30); //Defini la taille et l'emplacement

    /*
     * Création d'un deuxième bouton
     */
    QPushButton otherButton("Autre", &button);
    otherButton.move(30, 40);

    fenetre.show();

    return QApplication::exec();
}

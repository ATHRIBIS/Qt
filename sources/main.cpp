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

    fenetre.show();

    return application.exec();
}

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QWidget window; //Création d'un widget qui servira de fenêtre
    window.setFixedSize(300, 150);

    /*
     * Créatoin du bouton dans la fenêtre
     */
    QPushButton button("Pimp mon button!", &window); //Création du bouton
    button.setFont(QFont("Courier"));
    button.setCursor(QCursor(Qt::BitmapCursor));

    return QApplication::exec();
}

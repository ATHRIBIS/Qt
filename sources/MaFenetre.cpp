//
// Created by Aymeric Schaeffer on 13/03/2021.
//

#include "MaFenetre.h"


MaFenetre::MaFenetre() : QWidget() {
    setFixedSize(230,120);

    m_boutonDialogue = new QPushButton("Police", this);
    m_boutonDialogue->move(20,50);

    QObject::connect(m_boutonDialogue, SIGNAL(clicked(bool)), this, SLOT(ouvrirDialogue()));
}

void MaFenetre::ouvrirDialogue() {
//    //Insérer ici le code d'ouverture d'une boite de dialogue
//
//    //On créé une varibale answer
//    //C'est ce qu'on appel une énumartion : en réalité le type n'est pas int mais bien QMessageButton (pour une mielleure lecture)
//    int answer = QMessageBox::question(this, QString("Couleur de cheveux"), QString("Êtes vous blond ?"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
//
//    //On vérifie la réponse et y attribue une action
//    if (answer == QMessageBox::Yes) {
//        QMessageBox::information(this, "Blond", "<a href=\"https://www.youtube.com/watch?v=TBAoMsLODKI\">Vous êtes blond ! blond ! blond !</a>");
//    } else {
//        QMessageBox::critical(this, "Pas blond", "Sortez immédiatement de ce programme autorisé uniquement aux personnes blondes !");
//    }

    /*
     * On créé une fenetre de dialogue de saisie
     * On vérifie maitenant si le bouton ok est cliqué
     */

//    bool ok = false; //pour bouton ok
//    QString pseudo = QInputDialog::getText(this, "Le moche", "Qui est moche ici ?", QLineEdit::Normal, QString(), &ok); //assigne la variable ok a true si OK cliqué
//
//    if (ok && !pseudo.isEmpty()) { //Dans le cas ou ok est cliqué et que le pseudo n'est pas vide
//        m_boutonDialogue->setText(pseudo);
//        QMessageBox::information(this, "Ok!", "J'avoue " + pseudo + " est trop moche !");
//    } else {
//        m_boutonDialogue->setText(pseudo);
//        QMessageBox::critical(this, "Erreur!", "Veuillez rentrer un nom !");
//    }

    /*
     * Selectionnons une police
     * et une couleur
     */

//    bool ok = false; //pour vérifier le bouton chosit
//    QFont police = QFontDialog::getFont(&ok, m_boutonDialogue->font(), this, "Choissisez une police");
//    if (ok) {
//        m_boutonDialogue->setFont(police);
//    }
//    QColor color = QColorDialog::getColor(Qt::white, this);
//    QPalette palette;
//    palette.setColor(QPalette::ButtonText, color);
//    m_boutonDialogue->setPalette(palette);

    /*
     * Selection d'un dossier
     */
    QString dossier = QFileDialog::getExistingDirectory(this);
    QString fichier = QFileDialog::getOpenFileName(this, "Selectionnez un fichier", QString(), "Images (*.png *.jpg *.jpeg)");
    QMessageBox::information(this, "Fichier", "Vous avez selectionné :\n" + fichier);
}
//
// Created by Aymeric Schaeffer on 13/03/2021.
//

#include "MaFenetre.h"


MaFenetre::MaFenetre() : QWidget() {
    setFixedSize(230,120);

    m_boutonDialogue = new QPushButton("Ouvrir la boîte de dialogue", this);
    m_boutonDialogue->move(20,50);

    QObject::connect(m_boutonDialogue, SIGNAL(clicked(bool)), this, SLOT(ouvrirDialogue()));
    QObject::connect(this, SIGNAL(pseudoEntre()), this, SLOT(update()));
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
    bool ok = false; //pour bouton ok
    QString pseudo = QInputDialog::getText(this, "Pseudo", "Quel est votre pseudo ?", QLineEdit::Normal, QString(), &ok); //assigne la variable ok a true si OK cliqué

    if (ok && !pseudo.isEmpty()) { //Dans le cas ou ok est cliqué et que le pseudo n'est pas vide
        QMessageBox::information(this, "Ok!", "Votre pseudo est " + pseudo + " !");
    } else {
        QMessageBox::critical(this, "Erreur!", "Veuillez rentrer un pseudo !");
    }

}
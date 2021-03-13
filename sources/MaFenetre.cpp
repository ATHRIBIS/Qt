//
// Created by Aymeric Schaeffer on 13/03/2021.
//

#include "MaFenetre.h"
MaFenetre::MaFenetre() : QWidget() {
    setFixedSize(230,120);

    m_boutonDialogue = new QPushButton("Ouvrir la boîte de dialogue", this);
    m_boutonDialogue->move(20,50);

    QObject::connect(m_boutonDialogue, SIGNAL(clicked(bool)), this, SLOT(ouvrirDialogue()));
}

void MaFenetre::ouvrirDialogue() {
    //Insérer ici le code d'ouverture d'une boite de dialogue
    /*
     * information: affiche une information
     * @parent: l'objet parent
     * @title: le titre de la fenetre
     * @text: l'information a afficher dans la boite de dialogue
     */
    QMessageBox::information(this, QString("Titre boite dialogue"), QString("[Finished]"), QMessageBox::Close | QMessageBox::NoToAll); //| est un flag
    QMessageBox::warning(this, QString("Titre boite dialogue"), QString("[Warning]"));
    QMessageBox::critical(this, QString("Titre boite dialogue"), QString("[Critical]"));
    QMessageBox::question(this, QString("Titre boite dialogue"), QString("[Question]"));
}
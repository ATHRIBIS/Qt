//
// Created by Aymeric Schaeffer on 13/03/2021.
//

#ifndef QT_MAFENETRE_H
#define QT_MAFENETRE_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox> //Necessaire pour afficher des boites de dialogue
#include <QInputDialog> //Necessaire pour afficher des boites de dialogue de saisie
/*
 * Demande :
 * ::getText -> text
 * ::getInteger -> entier
 * ::getDouble -> double
 * ::getItem -> choisir parmi une liste
 */


class MaFenetre : public QWidget { //Herite notre fenetre de QWidget
    Q_OBJECT

public:
    MaFenetre();

public slots:
    void ouvrirDialogue();

private:
    QPushButton *m_boutonDialogue;
};


#endif //QT_MAFENETRE_H

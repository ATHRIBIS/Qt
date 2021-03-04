//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#include "MaFenetre.h"

MaFenetre::MaFenetre() : QWidget() {
    setFixedSize(300,500);

    m_premierBouton = new QPushButton("Signal n°1", this);
    m_premierBouton->setFont(QFont("Courier", 14, 75, true));
}

MaFenetre::~MaFenetre() {
    delete m_premierBouton;
}

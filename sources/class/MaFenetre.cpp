//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#include "MaFenetre.h"

MaFenetre::MaFenetre() : QWidget() {
    setFixedSize(300, 500);

    m_premierBouton = new QPushButton("Quitter", this);
    m_premierBouton->setFont(QFont("Courier", 14, 75, true));

    /*
     * Signals
     * voir p399
     */
    QObject::connect(m_premierBouton, SIGNAL(clicked()), qApp, SLOT(quit()));
}

MaFenetre::~MaFenetre() {
    delete m_premierBouton;
}
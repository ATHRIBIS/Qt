//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#include "MaFenetre.h"

MaFenetre::MaFenetre() : QWidget() {
    setFixedSize(300,500);

    m_sliderL = new QSlider(this);
    m_sliderL->setOrientation(Qt::Horizontal);
    m_sliderL->setRange(300,1000);
    m_sliderL->setGeometry(50, 50, 200, 30);

    m_sliderH = new QSlider(this);
    m_sliderH->setOrientation(Qt::Horizontal);
    m_sliderH->setRange(500,1000);
    m_sliderH->setGeometry(50, 80, 200, 30);

    QObject::connect(m_sliderL, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
    QObject::connect(m_sliderH, SIGNAL(valueChanged(int)), this, SLOT(changerHauteur(int)));
    QObject::connect(this, SIGNAL(aggrandissmntMaxL()), qApp, SLOT(aboutQt()));
    /*
     * Pour un schema UML
     * voir p410
     */
}

MaFenetre::~MaFenetre() {
    delete m_sliderL;
    delete m_sliderH;
}

void MaFenetre::changerLargeur(int largeur) {
    setFixedSize(largeur, height());
    if (largeur == 1000) {
        emit aggrandissmntMaxL(); //On emet un signal
    }
}

void MaFenetre::changerHauteur(int largeur) {
    setFixedSize(width(), largeur);
}

//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#include "MaFenetre.h"

MaFenetre::MaFenetre() : QWidget() {
    setFixedSize(300, 500);

    m_lcd = new QLCDNumber(this);
    m_lcd->setSegmentStyle(QLCDNumber::Flat);
    m_lcd->move(25, 25);

    m_slider = new QSlider(this);
    m_slider->setGeometry(10,60,150,20);

    /*
     * Signals
     * voir p399
     */

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int)));
    /*
     * La connexion se fait de int à int, pas besoin de nommer les arguments
     */
}

MaFenetre::~MaFenetre() {
}
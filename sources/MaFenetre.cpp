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
    m_slider->setOrientation(Qt::Horizontal);
    m_slider->setGeometry(10,60,150,20); //[Ø;99] € 100 valeurs

    m_progssBarr = new QProgressBar (this);
    m_progssBarr->setOrientation(Qt::Horizontal);
    m_progssBarr->setGeometry(10, 200, 150, 20);

    m_slider2 = new QSlider(this);
    m_slider2->setOrientation(Qt::Horizontal);
    m_slider2->setGeometry(10,130,150,20); //[Ø;99] € 100 valeurs

    /*
     * Signals
     * voir p399
     */

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_lcd, SLOT(display(int)));
    QObject::connect(m_slider2, SIGNAL(valueChanged(int)), m_progssBarr, SLOT(setValue(int)));

    /*
     * La connexion se fait de int à int, pas besoin de nommer les arguments
     */
}

MaFenetre::~MaFenetre() {
    delete m_progssBarr;
    delete m_slider;
    delete m_slider2;
    delete m_lcd;
}
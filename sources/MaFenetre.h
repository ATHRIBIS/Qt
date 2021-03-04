//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#ifndef QT_MAFENETRE_H
#define QT_MAFENETRE_H

#include "QApplication"
#include "QWidget"
#include "QPushButton"
#include "QLCDNumber"
#include "QProgressBar"
#include "QSlider"


class MaFenetre : public QWidget {
public:
    MaFenetre();
    ~MaFenetre();

private:
    QLCDNumber *m_lcd;
    QProgressBar *m_progssBarr;
    QSlider *m_slider;
    QSlider *m_slider2;
};


#endif //QT_MAFENETRE_H

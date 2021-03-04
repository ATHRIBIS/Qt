//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#ifndef QT_MAFENETRE_H
#define QT_MAFENETRE_H

#include "QApplication"
#include "QWidget"
#include "QPushButton"
#include "QLCDNumber"
#include "QSlider"


class MaFenetre : public QWidget {
public:
    MaFenetre();
    ~MaFenetre();

private:
    QLCDNumber *m_lcd;
    QSlider *m_slider;
};


#endif //QT_MAFENETRE_H

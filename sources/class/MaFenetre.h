//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#ifndef QT_MAFENETRE_H
#define QT_MAFENETRE_H

#include "QApplication"
#include "QWidget"
#include "QPushButton"

class MaFenetre : public QWidget {
public:
    MaFenetre();
    ~MaFenetre();

private:
    QWidget *m_premierBouton;
};


#endif //QT_MAFENETRE_H

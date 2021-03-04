//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#ifndef QT_MAFENETRE_H
#define QT_MAFENETRE_H

#include "QApplication"
#include "QWidget"
#include "QPushButton"
#include "QSlider"

class MaFenetre : public QWidget {
    /*
     * Créons une macro pour un slot personnalisé
     */
    Q_OBJECT
public:
    MaFenetre();
    ~MaFenetre();

public slots:
    void changerLargeur(int largeur);
    void changerHauteur(int hauteur);

private:
    QSlider *m_sliderL;
    QSlider *m_sliderH;
};


#endif //QT_MAFENETRE_H

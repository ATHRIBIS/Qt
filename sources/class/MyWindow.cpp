//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#include "MyWindow.h"


MyWindow::MyWindow() : QWidget() { //Constructeur de la fenetre
    /*
     * : QWidget()
     * Fait appel au constructeur par défaut de QWidget
     */

    setFixedSize(500, 100);

    /*
     * Construction du bouton
     */
    m_button = new QPushButton("Mon super bouton !", this);

    m_button->setFont(QFont("Courier", 16));
    m_button->setCursor(QCursor(Qt::DragCopyCursor));
    m_button->move(60,50);
}
MyWindow::MyWindow(int x, int y) : QWidget() { //Constructeur de la fenetre
    /*
     * : QWidget()
     * Fait appel au constructeur par défaut de QWidget
     */

    setFixedSize(x, y);

    /*
     * Construction du bouton
     */
    m_button = new QPushButton("Mon super bouton !", this);

    m_button->setFont(QFont("Courier", 16));
    m_button->setCursor(QCursor(Qt::DragCopyCursor));
    m_button->move(60,50);
}
MyWindow::~MyWindow() {
    delete m_button;
}

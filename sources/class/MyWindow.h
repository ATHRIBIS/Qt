//
// Created by Aymeric Schaeffer on 04/03/2021.
//

#ifndef QT_MYWINDOW_H
#define QT_MYWINDOW_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MyWindow : public QWidget { //Notre fenetre hérite de la classe QWidget qui permet de faire une fenetre
public:
    MyWindow(int x=500, int y=100); //Surcharge trkl
    ~MyWindow();

private:
    QPushButton *m_button;
};


#endif //QT_MYWINDOW_H

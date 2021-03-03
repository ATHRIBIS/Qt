#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button("Hi my name is Kilo");
    button.show();
    return a.exec();
}

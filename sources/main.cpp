#include <QApplication>
#include <QPushButton>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

#include "MaFenetre.h"

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);

    /*
     * Traduction des boutons qt
     * -> des boutons des fenetres "yes" en "oui"
     */
    QString locale = QLocale::system().name().section('_',0,0);
    QTranslator translator;
    translator.load(QString("qt_") + locale, QLibraryInfo::location(QLibraryInfo::TranslationsPath));
    QApplication::installTranslator(&translator);

    MaFenetre window;
    window.show();

    return QApplication::exec();
}

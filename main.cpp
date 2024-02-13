#include "gestion_etudiant.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Gestion_Etudiant w;
    w.show();
    return a.exec();
}

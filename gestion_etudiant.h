#ifndef GESTION_ETUDIANT_H
#define GESTION_ETUDIANT_H

#include <QMainWindow>

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QMessageBox>

#include "adminpage.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class Gestion_Etudiant;
}
QT_END_NAMESPACE

class Gestion_Etudiant : public QMainWindow
{
    Q_OBJECT

public:
    Gestion_Etudiant(QWidget *parent = nullptr);
    ~Gestion_Etudiant();

private slots:

    void on_pushButton_connexion_clicked();

    void on_pushButton_Annuler_clicked();

private:
    Ui::Gestion_Etudiant *ui;

    AdminPage *AdminPage;

};
#endif // GESTION_ETUDIANT_H

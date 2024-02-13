// adminpage.cpp
#include "adminpage.h"
#include "ui_adminpage.h"
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include<QSqlTableModel>
#include <qsqlrecord.h>
AdminPage::AdminPage(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::AdminPage)
{
    ui->setupUi(this);


    query = QSqlQuery(QSqlDatabase::database());

    connect(ui->Ajouter, SIGNAL(clicked()), this, SLOT(Ajouter()));
}

AdminPage::~AdminPage()
{
    delete ui;
}

void AdminPage::Ajouter()
{
    QString Nom = ui->lineEdit_nom->text().trimmed();  // trimmed() bach n  supprimiw les espaces f'début w la  fin dyal  chaîne
    QString Prenom = ui->lineEdit_prenom->text().trimmed();
    QString Adresse = ui->lineEdit_adress->text().trimmed();
    QString Niveau = ui->lineEdit_niveau->text().trimmed();
    QString Specialisation = ui->lineEdit_specialisation->text().trimmed();

    // pour Vérifiez wach les chaamps vide ou non .
    if (Nom.isEmpty() || Prenom.isEmpty() || Adresse.isEmpty() || Niveau.isEmpty() || Specialisation.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Veuillez remplir tous les champs avant d'ajouter un étudiant.");
        return;
    }

    // Connexion à la base de données SQLite
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isValid()) {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/DELL/Desktop/c++ project/MyDataBase/MaBase.db");
    }

    if (!db.open()) {
        qDebug() << "Erreur de connexion à la base de données : " << db.lastError().text();
        return;
    }


    if (db.transaction()) {
        query.prepare("INSERT INTO Etudiants (Nom, Prenom, Address, Niveau, Specialisation) "
                      "VALUES (:Nom, :Prenom, :Adresse, :Niveau, :Specialisation)");

        query.bindValue(":Nom", Nom);
        query.bindValue(":Prenom", Prenom);
        query.bindValue(":Adresse", Adresse);
        query.bindValue(":Niveau", Niveau);
        query.bindValue(":Specialisation", Specialisation);

        if (query.exec()) {

            if (db.commit()) {
                QMessageBox::information(this, "Succès", "Étudiant ajouté avec succès!");
            } else {
                qDebug() << "Erreur lors du commit de la transaction : " << db.lastError().text();
            }
        } else {

            db.rollback();
            qDebug() << "Erreur lors de l'ajout de l'étudiant : " << query.lastError().text();
            QMessageBox::critical(this, "Erreur", "Erreur lors de l'ajout de l'étudiant : " + query.lastError().text());
        }
    } else {
        qDebug() << "Erreur lors du démarrage de la transaction : " << db.lastError().text();
    }
}


void AdminPage::on_load_data_clicked()
{
    // Connexion à la base de données SQLite
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isValid()) {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/DELL/Desktop/c++ project/MyDataBase/MaBase.db");
    }

    if (!db.open()) {
        qDebug() << "Erreur de connexion à la base de données : " << db.lastError().text();
        return;
    }


    QSqlTableModel *model = new QSqlTableModel(this, db);


    model->setTable("Etudiants");


    model->setFilter("1");
    model->select();



    ui->matable->setModel(model);

}


void AdminPage::on_modifier_clicked()
{
    QString EID = ui->IDChamp->text().trimmed();
    QString Nom = ui->lineEdit_nom->text().trimmed();
    QString Prenom = ui->lineEdit_prenom->text().trimmed();
    QString Adresse = ui->lineEdit_adress->text().trimmed();
    QString Niveau = ui->lineEdit_niveau->text().trimmed();
    QString Specialisation = ui->lineEdit_specialisation->text().trimmed();

    // Vérifiez si tous les champs sont non vides
    if (Nom.isEmpty() || Prenom.isEmpty() || Adresse.isEmpty() || Niveau.isEmpty() || Specialisation.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Veuillez remplir tous les champs avant de modifier un étudiant.");
        return;
    }

    // Connexion à la base de données SQLite
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isValid()) {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/DELL/Desktop/c++ project/MyDataBase/MaBase.db");
    }

    if (!db.open()) {
        qDebug() << "Erreur de connexion à la base de données : " << db.lastError().text();
        return;
    }

    // Vérifier si EID existe dans la base de données
    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT EID FROM Etudiants WHERE EID = :EID");
    checkQuery.bindValue(":EID", EID);

    if (!checkQuery.exec()) {
        qDebug() << "Erreur lors de la vérification de l'existence de l'EID : " << checkQuery.lastError().text();
        return;
    }

    if (!checkQuery.next()) {
        QMessageBox::critical(this, "Erreur", "L'étudiant avec l'EID spécifié n'existe pas dans la base de données.");
        return;
    }


    if (db.transaction()) {
        QSqlQuery updateQuery(db);
        updateQuery.prepare("UPDATE Etudiants SET Nom = :Nom, Prenom = :Prenom, Address = :Adresse, Niveau = :Niveau, Specialisation = :Specialisation WHERE EID = :EID");

        updateQuery.bindValue(":EID", EID);
        updateQuery.bindValue(":Nom", Nom);
        updateQuery.bindValue(":Prenom", Prenom);
        updateQuery.bindValue(":Adresse", Adresse);
        updateQuery.bindValue(":Niveau", Niveau);
        updateQuery.bindValue(":Specialisation", Specialisation);

        if (updateQuery.exec()) {

            if (db.commit()) {
                QMessageBox::information(this, "Succès", "Étudiant modifié avec succès!");
            } else {
                qDebug() << "Erreur lors du commit de la transaction : " << db.lastError().text();
            }
        } else {

            db.rollback();
            qDebug() << "Erreur lors de la modification de l'étudiant : " << updateQuery.lastError().text();
            QMessageBox::critical(this, "Erreur", "Erreur lors de la modification de l'étudiant : " + updateQuery.lastError().text());
        }
    } else {
        qDebug() << "Erreur lors du démarrage de la transaction : " << db.lastError().text();
    }
}


void AdminPage::on_Supprimer_clicked()
{
    QString EID = ui->IDChamp->text().trimmed();



    if (EID.isEmpty()) {
        QMessageBox::critical(this, "Erreur", "Veuillez remplir le champ ID avant de Supprimer un étudiant.");
        return;
    }


    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isValid()) {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("C:/Users/DELL/Desktop/c++ project/MyDataBase/MaBase.db");
    }

    if (!db.open()) {
        qDebug() << "Erreur de connexion à la base de données : " << db.lastError().text();
        return;
    }


    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT EID FROM Etudiants WHERE EID = :EID");
    checkQuery.bindValue(":EID", EID);

    if (!checkQuery.exec()) {
        qDebug() << "Erreur lors de la vérification de l'existence de l'EID : " << checkQuery.lastError().text();
        return;
    }

    if (!checkQuery.next()) {
        QMessageBox::critical(this, "Erreur", "L'étudiant avec l'EID spécifié n'existe pas dans la base de données.");
        return;
    }


    if (db.transaction()) {
        QSqlQuery updateQuery(db);
        updateQuery.prepare("DELETE FROM Etudiants WHERE EID = :EID");

        updateQuery.bindValue(":EID", EID);

        if (updateQuery.exec()) {

            if (db.commit()) {
                QMessageBox::information(this, "Succès", "Étudiant supprimé avec succès!");
            } else {
                qDebug() << "Erreur lors du commit de la transaction : " << db.lastError().text();
            }
        } else {

            db.rollback();
            qDebug() << "Erreur lors de la suppression de l'étudiant : " << updateQuery.lastError().text();
            QMessageBox::critical(this, "Erreur", "Erreur lors de la suppression  de l'étudiant : " + updateQuery.lastError().text());
        }
    } else {
        qDebug() << "Erreur lors du démarrage de la transaction : " << db.lastError().text();
    }
}


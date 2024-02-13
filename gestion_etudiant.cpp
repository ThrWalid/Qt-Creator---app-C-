#include "gestion_etudiant.h"
#include "ui_gestion_etudiant.h"






Gestion_Etudiant::Gestion_Etudiant(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Gestion_Etudiant)
{
    ui->setupUi(this);

    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/DELL/Desktop/c++ project/MyDataBase/MaBase.db");

    if(!mydb.open())
        ui->label->setText("Failed to open the database") ;
    else
        ui->label->setText("Conected....");
}

Gestion_Etudiant::~Gestion_Etudiant()
{
    delete ui;
}






void Gestion_Etudiant::on_pushButton_connexion_clicked()
{
    QString  RespoName = ui->lineEdit_Nom_Responsable->text();
    QString RespoPassword = ui->lineEdit_motDePasse->text();
    if(RespoName=="walid" && RespoPassword== "tahiri")
    {
        QMessageBox::information(this,"Succès !","Bienvenu Monsieur");
        hide();
        AdminPage = new class AdminPage(this);
        AdminPage->show();
    }
    else
    {
        QMessageBox::warning(this,"Avertissement!","Essayer un mot de passe ou un nom d'utilisateur valide");
    }
}


void Gestion_Etudiant::on_pushButton_Annuler_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Attension !","Êtes-vous sûr de vouloir fermer l'application ?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes){
        QApplication::quit();
    }
}



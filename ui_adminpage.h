/********************************************************************************
** Form generated from reading UI file 'adminpage.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPAGE_H
#define UI_ADMINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AdminPage
{
public:
    QTableView *matable;
    QLabel *label;
    QPushButton *Ajouter;
    QPushButton *Supprimer;
    QPushButton *modifier;
    QPushButton *load_data;
    QLabel *label_Nom_2;
    QLineEdit *IDChamp;
    QLabel *label_Nom;
    QLineEdit *lineEdit_nom;
    QLabel *label_Prenom;
    QLineEdit *lineEdit_prenom;
    QLabel *label_Adress;
    QLineEdit *lineEdit_adress;
    QLabel *label_Niveau;
    QLineEdit *lineEdit_niveau;
    QLabel *label_Specialisation;
    QLineEdit *lineEdit_specialisation;
    QLabel *label_2;
    QLabel *label_4;

    void setupUi(QDialog *AdminPage)
    {
        if (AdminPage->objectName().isEmpty())
            AdminPage->setObjectName("AdminPage");
        AdminPage->resize(1207, 534);
        AdminPage->setMinimumSize(QSize(1207, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cascadia Code SemiLight")});
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        AdminPage->setFont(font);
        AdminPage->setMouseTracking(false);
        AdminPage->setAutoFillBackground(false);
        AdminPage->setStyleSheet(QString::fromUtf8(""));
        matable = new QTableView(AdminPage);
        matable->setObjectName("matable");
        matable->setGeometry(QRect(570, 30, 611, 391));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Tahoma")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(true);
        matable->setFont(font1);
        matable->setAutoScroll(false);
        matable->setTabKeyNavigation(false);
        label = new QLabel(AdminPage);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 491, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cascadia Code SemiBold")});
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        label->setFont(font2);
        label->setWordWrap(true);
        Ajouter = new QPushButton(AdminPage);
        Ajouter->setObjectName("Ajouter");
        Ajouter->setGeometry(QRect(30, 470, 161, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        Ajouter->setFont(font3);
        Ajouter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    appearance: none;\n"
"    background-color: transparent;\n"
"    border: 1px solid #1A1A1A;\n"
"    border-radius: 17px;\n"
"    box-sizing: border-box;\n"
"    color: #3B3B3B;\n"
"    cursor: pointer;\n"
"    transition: all 300ms cubic-bezier(.23, 1, 0.32, 1);\n"
"    user-select: none;\n"
"    -webkit-user-select: none;\n"
"    touch-action: manipulation;\n"
"    will-change: transform;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    pointer-events: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #fff;\n"
"    background-color: #1A1A1A;\n"
"    box-shadow: rgba(0, 0, 0, 0.25) 0 8px 15px;\n"
"    transform: translateY(-2px) rotate(360deg); \n"
"}\n"
"\n"
"QPushButton:active {\n"
"    box-shadow: none;\n"
"    transform: translateY(0);\n"
"}\n"
""));
        Supprimer = new QPushButton(AdminPage);
        Supprimer->setObjectName("Supprimer");
        Supprimer->setGeometry(QRect(630, 470, 161, 51));
        Supprimer->setFont(font3);
        Supprimer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    appearance: none;\n"
"    background-color: transparent;\n"
"    border: 1px solid #1A1A1A;\n"
"    border-radius: 17px;\n"
"    box-sizing: border-box;\n"
"    color: #3B3B3B;\n"
"    cursor: pointer;\n"
"    transition: all 300ms cubic-bezier(.23, 1, 0.32, 1);\n"
"    user-select: none;\n"
"    -webkit-user-select: none;\n"
"    touch-action: manipulation;\n"
"    will-change: transform;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    pointer-events: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #fff;\n"
"    background-color: #ff0000;\n"
"    box-shadow: rgba(0, 0, 0, 0.25) 0 8px 15px;\n"
"    transform: translateY(-2px) rotate(360deg); \n"
"}\n"
"\n"
"QPushButton:active {\n"
"    box-shadow: none;\n"
"    transform: translateY(0);\n"
"}\n"
""));
        modifier = new QPushButton(AdminPage);
        modifier->setObjectName("modifier");
        modifier->setGeometry(QRect(230, 470, 161, 51));
        modifier->setFont(font3);
        modifier->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    appearance: none;\n"
"    background-color: transparent;\n"
"    border: 1px solid #1A1A1A;\n"
"    border-radius: 17px;\n"
"    box-sizing: border-box;\n"
"    color: #3B3B3B;\n"
"    cursor: pointer;\n"
"    transition: all 300ms cubic-bezier(.23, 1, 0.32, 1);\n"
"    user-select: none;\n"
"    -webkit-user-select: none;\n"
"    touch-action: manipulation;\n"
"    will-change: transform;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    pointer-events: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #fff;\n"
"    background-color: #1A1A1A;\n"
"    box-shadow: rgba(0, 0, 0, 0.25) 0 8px 15px;\n"
"    transform: translateY(-2px) rotate(360deg); \n"
"}\n"
"\n"
"QPushButton:active {\n"
"    box-shadow: none;\n"
"    transform: translateY(0);\n"
"}\n"
""));
        load_data = new QPushButton(AdminPage);
        load_data->setObjectName("load_data");
        load_data->setGeometry(QRect(430, 470, 161, 51));
        load_data->setFont(font3);
        load_data->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    appearance: none;\n"
"    background-color: transparent;\n"
"    border: 1px solid #1A1A1A;\n"
"    border-radius: 17px;\n"
"    box-sizing: border-box;\n"
"    color: #3B3B3B;\n"
"    cursor: pointer;\n"
"    transition: all 300ms cubic-bezier(.23, 1, 0.32, 1);\n"
"    user-select: none;\n"
"    -webkit-user-select: none;\n"
"    touch-action: manipulation;\n"
"    will-change: transform;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    pointer-events: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    color: #fff;\n"
"    background-color: #1A1A1A;\n"
"    box-shadow: rgba(0, 0, 0, 0.25) 0 8px 15px;\n"
"    transform: translateY(-2px) rotate(360deg); \n"
"}\n"
"\n"
"QPushButton:active {\n"
"    box-shadow: none;\n"
"    transform: translateY(0);\n"
"}\n"
""));
        label_Nom_2 = new QLabel(AdminPage);
        label_Nom_2->setObjectName("label_Nom_2");
        label_Nom_2->setGeometry(QRect(120, 100, 31, 28));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI")});
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setItalic(true);
        label_Nom_2->setFont(font4);
        IDChamp = new QLineEdit(AdminPage);
        IDChamp->setObjectName("IDChamp");
        IDChamp->setGeometry(QRect(250, 90, 101, 41));
        label_Nom = new QLabel(AdminPage);
        label_Nom->setObjectName("label_Nom");
        label_Nom->setGeometry(QRect(120, 160, 61, 28));
        label_Nom->setFont(font4);
        lineEdit_nom = new QLineEdit(AdminPage);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(250, 150, 181, 41));
        label_Prenom = new QLabel(AdminPage);
        label_Prenom->setObjectName("label_Prenom");
        label_Prenom->setGeometry(QRect(120, 220, 81, 20));
        label_Prenom->setFont(font4);
        lineEdit_prenom = new QLineEdit(AdminPage);
        lineEdit_prenom->setObjectName("lineEdit_prenom");
        lineEdit_prenom->setGeometry(QRect(250, 210, 181, 41));
        label_Adress = new QLabel(AdminPage);
        label_Adress->setObjectName("label_Adress");
        label_Adress->setGeometry(QRect(120, 280, 91, 28));
        label_Adress->setFont(font4);
        lineEdit_adress = new QLineEdit(AdminPage);
        lineEdit_adress->setObjectName("lineEdit_adress");
        lineEdit_adress->setGeometry(QRect(250, 270, 181, 41));
        label_Niveau = new QLabel(AdminPage);
        label_Niveau->setObjectName("label_Niveau");
        label_Niveau->setGeometry(QRect(120, 340, 71, 20));
        label_Niveau->setFont(font4);
        lineEdit_niveau = new QLineEdit(AdminPage);
        lineEdit_niveau->setObjectName("lineEdit_niveau");
        lineEdit_niveau->setGeometry(QRect(250, 330, 181, 41));
        label_Specialisation = new QLabel(AdminPage);
        label_Specialisation->setObjectName("label_Specialisation");
        label_Specialisation->setGeometry(QRect(120, 400, 131, 21));
        label_Specialisation->setFont(font4);
        lineEdit_specialisation = new QLineEdit(AdminPage);
        lineEdit_specialisation->setObjectName("lineEdit_specialisation");
        lineEdit_specialisation->setGeometry(QRect(250, 390, 181, 41));
        label_2 = new QLabel(AdminPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(570, 410, 611, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);"));
        label_4 = new QLabel(AdminPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(570, 20, 611, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0,0,0);"));

        retranslateUi(AdminPage);

        QMetaObject::connectSlotsByName(AdminPage);
    } // setupUi

    void retranslateUi(QDialog *AdminPage)
    {
        AdminPage->setWindowTitle(QCoreApplication::translate("AdminPage", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AdminPage", "Bienvenu Monsieur  sur votre zone de Gestion ", nullptr));
        Ajouter->setText(QCoreApplication::translate("AdminPage", "Ajouter", nullptr));
        Supprimer->setText(QCoreApplication::translate("AdminPage", "Supprimer", nullptr));
        modifier->setText(QCoreApplication::translate("AdminPage", "Modifier", nullptr));
        load_data->setText(QCoreApplication::translate("AdminPage", "R\303\251cup\303\251rer ", nullptr));
        label_Nom_2->setText(QCoreApplication::translate("AdminPage", "ID :", nullptr));
        label_Nom->setText(QCoreApplication::translate("AdminPage", "Nom :", nullptr));
        label_Prenom->setText(QCoreApplication::translate("AdminPage", "Prenom :", nullptr));
        label_Adress->setText(QCoreApplication::translate("AdminPage", "Address :", nullptr));
        label_Niveau->setText(QCoreApplication::translate("AdminPage", "Niveau :", nullptr));
        label_Specialisation->setText(QCoreApplication::translate("AdminPage", "Specialisation :", nullptr));
        label_2->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminPage: public Ui_AdminPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPAGE_H

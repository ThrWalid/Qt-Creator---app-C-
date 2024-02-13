/********************************************************************************
** Form generated from reading UI file 'gestion_etudiant.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_ETUDIANT_H
#define UI_GESTION_ETUDIANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gestion_Etudiant
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_connexion;
    QPushButton *pushButton_Annuler;
    QLineEdit *lineEdit_Nom_Responsable;
    QLineEdit *lineEdit_motDePasse;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QMainWindow *Gestion_Etudiant)
    {
        if (Gestion_Etudiant->objectName().isEmpty())
            Gestion_Etudiant->setObjectName("Gestion_Etudiant");
        Gestion_Etudiant->resize(1307, 620);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        Gestion_Etudiant->setFont(font);
        centralwidget = new QWidget(Gestion_Etudiant);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 590, 91, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Cascadia Code SemiBold")});
        font1.setPointSize(8);
        label->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 150, 601, 81));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Cascadia Code SemiBold")});
        font2.setPointSize(20);
        font2.setBold(true);
        label_3->setFont(font2);
        label_3->setScaledContents(false);
        label_3->setWordWrap(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 260, 581, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe Fluent Icons")});
        font3.setPointSize(11);
        font3.setItalic(false);
        font3.setUnderline(true);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        label_2->setFont(font3);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 319, 191, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Cascadia Code SemiBold")});
        font4.setPointSize(12);
        font4.setBold(false);
        label_4->setFont(font4);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 390, 181, 20));
        label_5->setFont(font4);
        pushButton_connexion = new QPushButton(centralwidget);
        pushButton_connexion->setObjectName("pushButton_connexion");
        pushButton_connexion->setGeometry(QRect(50, 470, 181, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Cascadia Code SemiBold")});
        font5.setPointSize(12);
        font5.setBold(true);
        pushButton_connexion->setFont(font5);
        pushButton_connexion->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_connexion->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_Annuler = new QPushButton(centralwidget);
        pushButton_Annuler->setObjectName("pushButton_Annuler");
        pushButton_Annuler->setGeometry(QRect(260, 470, 181, 51));
        pushButton_Annuler->setFont(font5);
        pushButton_Annuler->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_Annuler->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    appearance: none;\n"
"    background-color: transparent;\n"
"    border: 1px solid #1A1A1A;\n"
"    border-radius: 17px;\n"
"    box-sizing: border-box;\n"
"    color: #3B3B3B;\n"
"    cursor: pointer;\n"
"    \n"
"   \n"
"   \n"
"   \n"
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
        lineEdit_Nom_Responsable = new QLineEdit(centralwidget);
        lineEdit_Nom_Responsable->setObjectName("lineEdit_Nom_Responsable");
        lineEdit_Nom_Responsable->setGeometry(QRect(260, 310, 181, 41));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial Black")});
        font6.setPointSize(10);
        font6.setBold(true);
        lineEdit_Nom_Responsable->setFont(font6);
        lineEdit_Nom_Responsable->setStyleSheet(QString::fromUtf8(""));
        lineEdit_motDePasse = new QLineEdit(centralwidget);
        lineEdit_motDePasse->setObjectName("lineEdit_motDePasse");
        lineEdit_motDePasse->setGeometry(QRect(260, 380, 181, 41));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial Black")});
        font7.setPointSize(10);
        lineEdit_motDePasse->setFont(font7);
        lineEdit_motDePasse->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(380, -60, 921, 991));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/uwaaaaaaaaaaaaaaaaa.png")));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 501, 131));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../Pictures/logo.png")));
        Gestion_Etudiant->setCentralWidget(centralwidget);

        retranslateUi(Gestion_Etudiant);

        QMetaObject::connectSlotsByName(Gestion_Etudiant);
    } // setupUi

    void retranslateUi(QMainWindow *Gestion_Etudiant)
    {
        Gestion_Etudiant->setWindowTitle(QCoreApplication::translate("Gestion_Etudiant", "Gestion_Etudiant", nullptr));
        label->setText(QCoreApplication::translate("Gestion_Etudiant", "[+] Status", nullptr));
        label_3->setText(QCoreApplication::translate("Gestion_Etudiant", "<html><head/><body><p>Bienvenue sur votre application de gestion \303\251ducative </p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Gestion_Etudiant", "Connectez-vous et g\303\251rez vos \303\251tudiants de mani\303\250re efficace ", nullptr));
        label_4->setText(QCoreApplication::translate("Gestion_Etudiant", "Nom Responsable :", nullptr));
        label_5->setText(QCoreApplication::translate("Gestion_Etudiant", "Mot De Passe :", nullptr));
        pushButton_connexion->setText(QCoreApplication::translate("Gestion_Etudiant", "Connexion", nullptr));
        pushButton_Annuler->setText(QCoreApplication::translate("Gestion_Etudiant", "Annuler", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Gestion_Etudiant: public Ui_Gestion_Etudiant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_ETUDIANT_H

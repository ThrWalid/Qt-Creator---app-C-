#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include "qsqlquery.h"
#include <QDialog>

namespace Ui {
class AdminPage;
}

class AdminPage : public QDialog
{
    Q_OBJECT

public:
    explicit AdminPage(QWidget *parent = nullptr);
    ~AdminPage();

private slots:



    void Ajouter();

    void on_load_data_clicked();


    void on_modifier_clicked();

    void on_Supprimer_clicked();

private:
    Ui::AdminPage *ui;
    QSqlQuery query;
};

#endif // ADMINPAGE_H

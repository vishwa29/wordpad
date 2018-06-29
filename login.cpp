#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QSqlDatabase mydb=  QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("");
}

login::~login()
{
    delete ui;
}

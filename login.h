#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private:
    Ui::login *ui;
};

#endif // LOGIN_H

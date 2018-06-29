#include "ui_dialog.h"
#include "textedit.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include "dialog.h"
#include <conio.h>
#include <iostream>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/vishw/Pictures/qtback.jpg");
     bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
     QPalette palette;
     palette.setBrush(QPalette::Background, bkgnd);
     this->setPalette(palette);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{

this->hide();
}


void Dialog::on_START_clicked()
{

    this->hide();
}

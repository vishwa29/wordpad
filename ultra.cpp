#include "ultra.h"
#include "ui_ultra.h"

ultra::ultra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ultra)
{
    ui->setupUi(this);
}

ultra::~ultra()
{
    delete ui;
}

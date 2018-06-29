#ifndef ULTRA_H
#define ULTRA_H

#include <QDialog>

namespace Ui {
class ultra;
}

class ultra : public QDialog
{
    Q_OBJECT

public:
    explicit ultra(QWidget *parent = 0);
    ~ultra();

private:
    Ui::ultra *ui;
};

#endif // ULTRA_H

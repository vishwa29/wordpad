#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMainWindow>
#include <QMap>
#include <QPointer>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_customContextMenuRequested(const QPoint &pos);

    void on_graphicsView_windowIconChanged(const QIcon &icon);

    void on_START_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H

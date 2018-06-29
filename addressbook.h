
#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <QWidget>
#include <QMap>

QT_BEGIN_NAMESPACE
class QPushButton;
class QLabel;
class QLineEdit;
class QTextEdit;
QT_END_NAMESPACE

class AddressBook : public QWidget
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = 0);

    enum Mode { NavigationMode, AddingMode, EditingMode };

public slots:
    void addContact();
    void submitContact();
    void cancel();
    void editContact();
    void removeContact();
    void next();
    void previous();

private:

    void updateInterface(Mode mode);
    QPushButton *addButton;

    QPushButton *editButton;
    QPushButton *removeButton;

    QPushButton *submitButton;
    QPushButton *cancelButton;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QLineEdit *nameLine;
    QTextEdit *addressText;

    QMap<QString, QString> contacts;
    QString oldName;
    QString oldAddress;
    Mode currentMode;

};

#endif

#include "textedit.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include "dialog.h"
#include"mainwindow.h"
#include"addressbook.h"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(textedit);
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("Digital");
    QCoreApplication::setApplicationName("TEXT");
    QCoreApplication::setApplicationVersion(QT_VERSION_STR);
    QCommandLineParser parser;
    parser.setApplicationDescription(QCoreApplication::applicationName());
    parser.addHelpOption();
    parser.addVersionOption();
    parser.addPositionalArgument("file", "The file to open.");
    parser.process(a);
    AddressBook kkp;
    kkp.showFullScreen();
    MainWindow kp;
    kp.showFullScreen();
    TextEdit mw;
    mw.showFullScreen();

    Dialog mm;
    mm.showFullScreen();


    return a.exec();
}

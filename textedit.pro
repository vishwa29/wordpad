#-------------------------------------------------
#
# Project created by QtCreator 2018-04-04T04:44:28
#
#-------------------------------------------------
QT += widgets sql
qtHaveModule(printsupport): QT += printsupport

TEMPLATE        = app
TARGET          = textedit

HEADERS         = \
    dialog.h \
    textedit.h \
    mainwindow.h \
    scribblearea.h \
    login.h \
    addressbook.h \
    adddialog.h \
    addresswidget.h \
    newaddresstab.h \
    tablemodel.h \
    ultra.h
SOURCES         = \
                  main.cpp \
    dialog.cpp \
    textedit.cpp \
    mainwindow.cpp \
    scribblearea.cpp \
    login.cpp \
    addressbook.cpp \
    adddialog.cpp \
    addresswidget.cpp \
    newaddresstab.cpp \
    tablemodel.cpp \
    ultra.cpp

RESOURCES += textedit.qrc
build_all:!build_pass {
    CONFIG -= build_all
    CONFIG += release
}

EXAMPLE_FILES = textedit.qdoc

# install
target.path = C:\Users\vishw\Documents\textedit
INSTALLS += target

FORMS += \
    textedit.ui \
    login.ui \
    dialog.ui \
    addressbook.ui \
    adddialog.ui \
    addresswidget.ui \
    newaddresstab.ui \
    tablemodel.ui \
    ultra.ui

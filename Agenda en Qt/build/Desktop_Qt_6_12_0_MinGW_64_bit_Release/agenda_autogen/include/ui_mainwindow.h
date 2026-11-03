/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tblContactos;
    QLabel *label;
    QGroupBox *gpxAdiciona;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *txtNombre;
    QTextEdit *textTelefono;
    QTextEdit *textCorreo;
    QPushButton *btnRegistraContacto;
    QPushButton *btnAdiciona;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::ApplicationModal);
        MainWindow->resize(920, 548);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tblContactos = new QTableWidget(centralwidget);
        tblContactos->setObjectName("tblContactos");
        tblContactos->setGeometry(QRect(20, 220, 881, 271));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 20, 161, 31));
        QFont font;
        font.setPointSize(21);
        label->setFont(font);
        gpxAdiciona = new QGroupBox(centralwidget);
        gpxAdiciona->setObjectName("gpxAdiciona");
        gpxAdiciona->setGeometry(QRect(20, 100, 871, 91));
        label_2 = new QLabel(gpxAdiciona);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 49, 16));
        label_3 = new QLabel(gpxAdiciona);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(220, 20, 49, 16));
        label_4 = new QLabel(gpxAdiciona);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(430, 20, 141, 16));
        txtNombre = new QTextEdit(gpxAdiciona);
        txtNombre->setObjectName("txtNombre");
        txtNombre->setGeometry(QRect(10, 40, 171, 31));
        textTelefono = new QTextEdit(gpxAdiciona);
        textTelefono->setObjectName("textTelefono");
        textTelefono->setGeometry(QRect(220, 40, 171, 31));
        textCorreo = new QTextEdit(gpxAdiciona);
        textCorreo->setObjectName("textCorreo");
        textCorreo->setGeometry(QRect(430, 40, 171, 31));
        btnRegistraContacto = new QPushButton(gpxAdiciona);
        btnRegistraContacto->setObjectName("btnRegistraContacto");
        btnRegistraContacto->setGeometry(QRect(640, 20, 171, 51));
        btnRegistraContacto->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::ContactNew));
        btnRegistraContacto->setIcon(icon1);
        btnRegistraContacto->setIconSize(QSize(24, 24));
        btnAdiciona = new QPushButton(centralwidget);
        btnAdiciona->setObjectName("btnAdiciona");
        btnAdiciona->setGeometry(QRect(720, 30, 171, 51));
        btnAdiciona->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        btnAdiciona->setIcon(icon2);
        btnAdiciona->setIconSize(QSize(24, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 920, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Memple v1.0 :: UNEDL", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "MEMPLE", nullptr));
        gpxAdiciona->setTitle(QCoreApplication::translate("MainWindow", "Adicionando nuevo contacto", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tel\303\251fono", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Correo electr\303\263nico", nullptr));
        btnRegistraContacto->setText(QCoreApplication::translate("MainWindow", "Guardar contacto", nullptr));
        btnAdiciona->setText(QCoreApplication::translate("MainWindow", "Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

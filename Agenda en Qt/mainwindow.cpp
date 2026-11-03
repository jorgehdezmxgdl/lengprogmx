#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Construcción de la tabla
    ui->tblContactos->setColumnCount(3);
    QStringList encabezados;
    encabezados << "Nombre del contacto" << "Teléfono" << "Correo electrónico";
    ui->tblContactos->setHorizontalHeaderLabels(encabezados);
    ui->tblContactos->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tblContactos->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tblContactos->setSelectionMode(QAbstractItemView::SingleSelection);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::insertaContactoEnTabla(QString nombre, QString telefono, QString correo) {
    int fila = ui->tblContactos->rowCount();
    ui->tblContactos->insertRow(fila);
    ui->tblContactos->setItem(fila, 0, new QTableWidgetItem(nombre));
    ui->tblContactos->setItem(fila, 1, new QTableWidgetItem(telefono));
    ui->tblContactos->setItem(fila, 2, new QTableWidgetItem(correo));
    ui->tblContactos->update();
}

void MainWindow::limpiaCampos() {
    ui->txtNombre->clear();
    ui->textCorreo->clear();
    ui->textTelefono->clear();
}

void MainWindow::on_btnRegistraContacto_clicked()
{
    QString nombre   = ui->txtNombre->toPlainText();
    QString telefono = ui->textTelefono->toPlainText();
    QString correo   = ui->textCorreo->toPlainText();

    if (nombre.trimmed().isEmpty()) {
        QMessageBox::warning(this, "Memple", "Falta el nombre del contacto");
        return;
    }

    if (telefono.trimmed().isEmpty()) {
        QMessageBox::warning(this, "Memple", "Falta el número teléfonico del contacto");
        return;
    }

    if (correo.trimmed().isEmpty()) {
        QMessageBox::warning(this, "Memple", "Falta el correo del contacto");
        return;
    }

    insertaContactoEnTabla(nombre, telefono, correo);
    limpiaCampos();
}


void MainWindow::on_tblContactos_cellDoubleClicked(int row, int column)
{
    QMessageBox::information(this,"Memple",
                             QString::number(row) + " " + QString::number(column));
}


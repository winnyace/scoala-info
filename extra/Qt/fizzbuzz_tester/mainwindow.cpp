#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    bool ok;
    int num = ui->lineEdit->text().toInt(&ok, 10);
    if (ok == true) {
        if (num%3 == 0 && num%5 == 0)
            QMessageBox::information(this, "Fizzbuzz Test", QString("Fizzbuzz"));
        else if (num%3 == 0)
            QMessageBox::information(this, "Fizzbuzz Test", QString("Fizz"));
        else if (num%5 == 0)
            QMessageBox::information(this, "Fizzbuzz Test", QString("Buzz"));
        else
            QMessageBox::information(this, "Fizzbuzz Test", QString(ui->lineEdit->text()));
    }
    else
        QMessageBox::information(this, "Fizzbuzz Test", QString("The input is not a number"));
}


void MainWindow::on_lineEdit_returnPressed()
{
    bool ok;
    int num = ui->lineEdit->text().toInt(&ok, 10);
    if (ok == true) {
        if (num%3 == 0 && num%5 == 0)
            QMessageBox::information(this, "Fizzbuzz Test", QString("Fizzbuzz"));
        else if (num%3 == 0)
            QMessageBox::information(this, "Fizzbuzz Test", QString("Fizz"));
        else if (num%5 == 0)
            QMessageBox::information(this, "Fizzbuzz Test", QString("Buzz"));
        else
            QMessageBox::information(this, "Fizzbuzz Test", QString(ui->lineEdit->text()));
    }
    else
        QMessageBox::information(this, "Fizzbuzz Test", QString("The input is not a number"));
}

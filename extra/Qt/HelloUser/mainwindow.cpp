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
    QMessageBox::information(this, "Hello!", QString("Hello, " + ui->lineEdit->text() + "!"));
}

void MainWindow::on_lineEdit_returnPressed()
{
    QMessageBox::information(this, "Hello!", QString("Hello, " + ui->lineEdit->text() + "!"));
}

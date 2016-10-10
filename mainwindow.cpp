#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_amountOfChars_valueChanged(int arg1)
{

}

void MainWindow::on_useLowercase_toggled(bool checked)
{

}

void MainWindow::on_useUppercase_toggled(bool checked)
{

}

void MainWindow::on_useNumbers_clicked(bool checked)
{

}

void MainWindow::on_useSymbols_toggled(bool checked)
{

}

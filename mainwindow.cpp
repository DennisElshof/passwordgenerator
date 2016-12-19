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

void MainWindow::on_amountOfChars_valueChanged(int amount)
{
    if(amount < 1)
    {
        // Error: Amount of characters cannot be negative
    }
    else
    {
        if(!userInterfaceSettings->setLength(amount))
        {
         // Error: Invalid input length from User Interface
        }
    }
}

void MainWindow::on_useLowercase_toggled(bool checked)
{
    if(!userInterfaceSettings->setLowercase(checked))
    {
        // Error: Invalid parameter combination
    }
}

void MainWindow::on_useUppercase_toggled(bool checked)
{
    if(!userInterfaceSettings->setUppercase(checked))
    {
        // Error: Invalid parameter combination
    }
}

void MainWindow::on_useNumbers_clicked(bool checked)
{
    if(!userInterfaceSettings->setNumbers(checked))
    {
        // Error: Invalid parameter combination
    }
}

void MainWindow::on_useSymbols_toggled(bool checked)
{
    if(!userInterfaceSettings->setSymbols(checked))
    {
        // Error: Invalid parameter combination
    }
}

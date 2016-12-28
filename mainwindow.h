#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "passwordrequirements.h"
#include "errordialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_amountOfChars_valueChanged(int amount);

    void on_useLowercase_toggled(bool checked);

    void on_useUppercase_toggled(bool checked);

    void on_useNumbers_clicked(bool checked);

    void on_useSymbols_toggled(bool checked);

    void on_generate_clicked();

private:
    Ui::MainWindow *ui;
    Settings::PasswordRequirements *userInterfaceSettings;
};

#endif // MAINWINDOW_H

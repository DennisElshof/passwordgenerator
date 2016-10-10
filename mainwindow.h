#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_amountOfChars_valueChanged(int arg1);

    void on_useLowercase_toggled(bool checked);

    void on_useUppercase_toggled(bool checked);

    void on_useNumbers_clicked(bool checked);

    void on_useSymbols_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

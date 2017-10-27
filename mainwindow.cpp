#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <qstring.h>
#include <QListWidgetItem>
#include <QListWidget>
#include <QInputDialog>
#include <QMessageBox>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->MainStackWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LoginButton_clicked()
{
    if (ui->UsernameLE->text() == "bobby" && ui->PwdLE->text() == "cool")
    {
        ui->MainStackWidget->setCurrentIndex(1);
        ui->StudentStackWidget->setCurrentIndex(0);
        ui->StudGroupBox->tr("quiz 1");
    }
    else
        cout << "Wrong cridentials!" << endl;
    ui->UsernameLE->clear();
    ui->PwdLE->clear();

}

void MainWindow::on_logoutButton_clicked()
{
    ui->MainStackWidget->setCurrentIndex(0);
}

void MainWindow::on_ViewInfoButton_clicked()
{
    ui->StudentStackWidget->setCurrentIndex(1);
}

void MainWindow::on_Studbackbutton1_clicked()
{
    ui->StudentStackWidget->setCurrentIndex(0);
}

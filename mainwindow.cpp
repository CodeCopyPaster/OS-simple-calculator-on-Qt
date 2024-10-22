#include "mainwindow.h"
#include "./ui_mainwindow.h"

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
QString num1 = "", num2 = "";
bool wait = false;
int expres = 0;

void MainWindow::on_ClearButton_clicked()
{
    ui->Label->clear();
    num1 = "" , num2 = "", wait = 0;
}



void MainWindow::on_OneButton_clicked()
{
    if ( wait == false){
    num1 = num1 + "1";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "1";
        ui->Label->setText(num2);
    }

}


void MainWindow::on_PlusButton_clicked()
{
    if (num1 == "" && num2 == "") {ui->Label->setText("Enter values!");goto skip;}
    ui->Label->clear();
    expres = 1;
    wait = 1;
    skip:
}


void MainWindow::on_TwoButton_clicked()
{
    if ( wait == false){
        num1 = num1 + "2";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "2";
    ui->Label->setText(num2);
    }

}


void MainWindow::on_ResultButton_clicked()
{ // crashes with switch(case) 🙃
    if (expres == 1) {
        double ans = num1.toDouble() + num2.toDouble();
        ui->Label->setText(QString::number(ans));
        num1 = num2 = "";
    }
    else if (expres == 2){
        double ans = num1.toDouble() - num2.toDouble();
        ui->Label->setText(QString::number(ans));
        num1 = num2 = "";
    }
    else if (expres == 3){
        double ans = num1.toDouble() * num2.toDouble();
        ui->Label->setText(QString::number(ans));
        num1 = num2 = "";
    }
    else if (expres == 4){
        double ans = num1.toDouble() / num2.toDouble();
        ui->Label->setText(QString::number(ans));
        num1 = num2 = "";
    }
    else {ui->Label->setText("Unknown operation");

}
}


void MainWindow::on_ThreeButton_clicked()
{
    if ( wait == false){
        num1 = num1 + "3";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "3";
        ui->Label->setText(num2);
    }
}


void MainWindow::on_FourButton_clicked()
{
    if ( wait == false){
        num1 = num1 + "4";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "4";
        ui->Label->setText(num2);
    }
}


void MainWindow::on_FiveButton_clicked()
{
    if ( wait == false){
        num1 = num1 + "5";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "5";
        ui->Label->setText(num2);
    }
}


void MainWindow::on_SixButton_clicked()
{
    if ( wait == false){
        num1 = num1 + "6";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "6";
        ui->Label->setText(num2);
    }
}


void MainWindow::on_SevenButton_clicked()
{
    if ( wait == false){
        num1 = num1 + "7";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "7";
        ui->Label->setText(num2);
    }
}


void MainWindow::on_EightButton_clicked()
{
    if ( wait == false){
        num1 = num1 + "8";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "8";
        ui->Label->setText(num2);
    }
}


void MainWindow::on_NineButton_clicked()
{
    if ( wait == false){
        num1 = num1 + "9";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "9";
        ui->Label->setText(num2);
    }
}


void MainWindow::on_ZeroButton_clicked()
{
    if ( num1 == "" || num2 == ""){
        ui->Label->setText("Wrong input");
    }
    if ( wait == false){
        num1 = num1 + "0";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + "0";
        ui->Label->setText(num2);
    }
}


void MainWindow::on_MinusButton_clicked()
{
    if (num1 == "" && num2 == ""){ui->Label->setText("Enter values!");goto skip;}
    ui->Label->clear();
    expres = 2;
    wait = 1;
    skip:
}


void MainWindow::on_MultiplyButton_clicked()
{
    if (num1 == "" && num2 == ""){ui->Label->setText("Enter values!");goto skip;}
    ui->Label->clear();
    expres = 3;
    wait = 1;
    skip:
}


void MainWindow::on_DivideButton_clicked()
{
    if (num1 == "" && num2 == ""){ui->Label->setText("Enter values!");goto skip;}
    ui->Label->clear();
    expres = 4;
    wait = 1;
    skip:
}



void MainWindow::on_PointButton_clicked()
{
    if ( num1 == "" || num2 == ""){
        ui->Label->setText("Wrong input");
    }
    if ( wait == false){
        num1 = num1 + ".";
        ui->Label->setText(num1);
    }
    else if (wait == true) { num2 = num2 + ".";
        ui->Label->setText(num2);
    }
}


void MainWindow::on_HelpButton_clicked()
{
    ui->Label->setText("Click [Clear] after [=]");
}


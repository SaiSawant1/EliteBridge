#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./controllscreen.h"
#include <QPixmap>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("D:/Qt learn/EliteBridge/assets/loginicon.png");
    ui->label_pic->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_LoingButton_clicked()
{
    if(ui->lineEdit_User->text()=="Admin"&&ui->lineEdit_Password->text()=="admin"){
        QMessageBox::information(this,"login sucessfull","Please click 'ok'");
        hide();
        controllScreen control;
        control.setModal(true);
        control.exec();

    }
    else{
         QMessageBox::information(this,"login Failed","Please Enter Correct User name and Password");
    }
}


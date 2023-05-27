#include "controllscreen.h"
#include "ui_controllscreen.h"

controllScreen::controllScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controllScreen)
{
    ui->setupUi(this);
}

controllScreen::~controllScreen()
{
    delete ui;
}

void controllScreen::on_pushButton_clicked()
{
    this->close();
}


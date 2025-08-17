#include "login.h"
#include "./ui_login.h"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);

    QPixmap pix(":/misc/resources/01-Logo.jpg");
    int w= ui->logo->width();
    int h= ui->logo->height();
    ui->logo->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

login::~login()
{
    delete ui;
}

#include "login.h"
#include "./ui_login.h"
#include <QMessageBox>
#include <qpixmap>

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

void login::on_pushButton_clicked()
{
    qApp->quit();
}


void login::on_pushButton_2_clicked()
{
    QString user= ui->logUser->text();
    QString pass= ui->logPass->text();

    if(user== "admin" && pass== "123456"){
        instanciadb = new dbmain(this);
        instanciadb->show();
    }else{
        QMessageBox::critical(this,"Error","Error de autentificación");
        ui->logUser->clear();
        ui->logPass->clear();
    }//if else validacion de usuario
}


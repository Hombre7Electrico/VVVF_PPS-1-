#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
//para abrir la ventana
#include "dbmain.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class login;
}
QT_END_NAMESPACE

class login : public QMainWindow
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::login *ui;
    //para abrir la ventana
    dbmain * instanciadb;
};
#endif // LOGIN_H

#include "dbmain.h"
#include "ui_dbmain.h"

dbmain::dbmain(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dbmain)
{
    ui->setupUi(this);
}

dbmain::~dbmain()
{
    delete ui;
}

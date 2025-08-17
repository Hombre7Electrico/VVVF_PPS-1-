#ifndef DBMAIN_H
#define DBMAIN_H

#include <QMainWindow>

namespace Ui {
class dbmain;
}

class dbmain : public QMainWindow
{
    Q_OBJECT

public:
    explicit dbmain(QWidget *parent = nullptr);
    ~dbmain();

private:
    Ui::dbmain *ui;
};

#endif // DBMAIN_H

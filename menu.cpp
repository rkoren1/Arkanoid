#include "menu.h"
#include "ui_menu.h"
#include <igra.h>
#include <QMouseEvent>
#include <levels.h>

Igra *igra;

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}


void menu::on_start_clicked()
{
    hide();
    Levels *a = new Levels();
    a->show();
    /*
    igra = new Igra();
    igra->start();
   igra->show();
   */




}


void menu::on_izhod_clicked()
{
    exit(0);
}

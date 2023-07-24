#include "levels.h"
#include "ui_levels.h"
#include <menu.h>
#include <igra.h>
#include <mapkreator.h>
#include <QFile>
#include <QFileInfo>
#include <QDebug>
#include <QPushButton>

extern menu *meni;
extern Igra *igra;


Levels::Levels(QWidget *parent) :
    QWidget (parent),
    ui(new Ui::Levels)
{
    ui->setupUi(this);

    QFile file("myLevels.txt");
    if(file.exists())
    {

            a = new QPushButton(this);
            a->setText("Moja mapa");
            a->setGeometry(100,150,100,40);
            connect(a,SIGNAL(released()),this,SLOT(abc()));


    }

}

Levels::~Levels()
{
    delete ui;
}

void Levels::on_nazaj_clicked()
{

    meni->show();
    delete this;


}

void Levels::on_pushButton_clicked()
{

    igra = new Igra();
        igra->start();
        igra->postaviZidake();
       igra->show();
       delete this;
}

void Levels::on_pushButton_2_clicked()
{
    igra = new Igra();
        igra->start();
        igra->mapa2();
       igra->show();
       delete this;
}

void Levels::on_pushButton_3_clicked()
{
    igra = new Igra();
        igra->start();
        igra->mapachesenko();
       igra->show();
       delete this;
}

void Levels::on_pushButton_4_clicked()
{
    Mapkreator *a = new Mapkreator();
    a->show();
    hide();

}

void Levels::abc()
{
    igra = new Igra();
        igra->start();


        QFile file("myLevels.txt");
    QTextStream in(&file);
    int i,j;
        if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
        {
            qDebug()<<"error while reading";
        }
        else
        {
            while(in.atEnd()== '\0')
            {
            in>>i>>j;
            igra->nared_mapo(i,j);
            qDebug()<<i<<' '<<j<<endl;
            }

        }

        file.close();



           igra->show();
           delete this;

}

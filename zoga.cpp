#include <zoga.h>
#include <igra.h>
#include <QTimer>
#include <QDebug>
#include <ploscica.h>
#include <QRectF>
#include <zidaki.h>
#include <menu.h>
#include <QPixmap>

extern Igra* igra;
extern menu* meni;

Zoga::Zoga()
{

    setRect(0,0,40,40);

    xhitrost = 0;
    yhitrost = -5;

    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(premikanje()));

    QPixmap slika(":/slike/pinball2.png");
    igra->scene->addPixmap(slika.scaled(43,43,Qt::IgnoreAspectRatio))->setParentItem(this);




}

double Zoga::getCenterX()
{
    return x()+ rect().center().x();
}

void Zoga::startej()
{
    timer->start(15);
}



void Zoga::premikanje()
{
    spremeniHitrostCeIzven();
    odbojPloscice();
    odbojZidaka();
    moveBy(xhitrost,yhitrost);

}

void Zoga::spremeniHitrostCeIzven()
{
    int screenW = igra->width();
    int screenH = igra->height();

 // left
 if (mapToScene(rect().topLeft()).x() <= 0){
     xhitrost = -1 * xhitrost;
 }else


 // right
 if (mapToScene(rect().topRight()).x() >= screenW){
     xhitrost = -1 * xhitrost;
 }else

 // top
 if (mapToScene(rect().topLeft()).y() <= 0){
     yhitrost = -1 * yhitrost;
 }else
     if(mapToScene(rect().topLeft()).y() > screenH)
     {
         //exit(0);
         meni->show();
         delete igra;



     }
}

void Zoga::odbojPloscice()
{
        QList<QGraphicsItem*> cItems = collidingItems();
        for (size_t i = 0, n = cItems.size(); i < n; ++i){
            Ploscica* paddle = dynamic_cast<Ploscica*>(cItems[i]);
            if (paddle){
                yhitrost = -1 * yhitrost;



                xhitrost = (xhitrost + (x()+ rect().center().x()-  paddle->getCenterX()))/15;

                return;
            }
        }
}

void Zoga::odbojZidaka()
{
    QList<QGraphicsItem*> cItems = collidingItems();
    for (size_t i = 0, n = cItems.size(); i < n; ++i)
    {
        Zidaki* block = dynamic_cast<Zidaki*>(cItems[i]);
        // collides with block
        if (block)
        {
            double yPad = 15;
            double xPad = 15;
            double ballx = pos().x();
            double bally = pos().y();
            double blockx = block->pos().x();
            double blocky = block->pos().y();

            // collides from bottom
            if (bally > blocky + yPad && yhitrost < 0){
                yhitrost = -1 * yhitrost;
            }

            // collides from top
            if (blocky > bally + yPad && yhitrost > 0 ){
                yhitrost = -1 * yhitrost;
            }

            // collides from right
            if (ballx > blockx + xPad && xhitrost < 0){
                xhitrost = -1 * xhitrost;
            }

            // collides from left
            if (blockx > ballx + xPad && xhitrost > 0){
                xhitrost = -1 * xhitrost;
            }

            // delete block(s)
            igra->scene->removeItem(block);
            delete block;
        }
    }
}

#include <superpower.h>
#include <QTimer>
#include <QList>
#include <igra.h>
#include <ploscica.h>
#include <QDebug>
#include <QPixmap>
extern Igra *igra;
extern Ploscica *ploscica;
Superpower::Superpower()
{
    setRect(0,0,30,20);
    yhitrost = 5;
    QTimer* timer = new QTimer();
     connect(timer,SIGNAL(timeout()),this,SLOT(premikanje()));
     timer->start(15);

    //int random = rand()%100 +1;


}


void Superpower::premikanje()
{
    moveBy(0,yhitrost);
    QList<QGraphicsItem*> cItems = collidingItems();
    for (size_t i = 0, n = cItems.size(); i < n; ++i)
    {
        Ploscica* paddle = dynamic_cast<Ploscica*>(cItems[i]);
        if (paddle)
        {
            ploscica->setRect(NULL,NULL,(ploscica->rect().width())+30,15);
            ploscica->nastavmere(ploscica->rect().width()+30);


            delete this;
        }
    }
    if(mapToScene(rect().bottomLeft()).y() > igra->height())
    {
        delete this;
    }

}



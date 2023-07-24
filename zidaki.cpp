#include <zidaki.h>
#include <Superpower.h>
#include <igra.h>
#include <QPixmap>

extern Igra *igra;
Zidaki::Zidaki()
{
    setRect(0,0,40,40);
    setBrush(Qt::yellow);
}

Zidaki::~Zidaki()
{
    int random = rand()%100 +1;
    if(random<10)
    {
        Superpower *bla = new Superpower();
        bla->setPos(x(),y());
        igra->scene->addItem(bla);
        QPixmap slika(":/slike/e.gif");
        igra->scene->addPixmap(slika.scaled(32,22,Qt::IgnoreAspectRatio))->setParentItem(bla);


    }
}



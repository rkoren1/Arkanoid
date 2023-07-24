#include <ploscica.h>
#include <QDebug>
#include <igra.h>
#include <zoga.h>
#include <QPixmap>
extern Igra *igra;

Ploscica::Ploscica()
{
    setRect(0,0,100,15);
    nastavmere(100);


}

double Ploscica::getCenterX()
{
    return x()+ rect().center().x();
}

void Ploscica::nastavmere(int i)
{
    QPixmap slika(":/slike/plata.png");
    igra->scene->addPixmap(slika.scaled(i,15))->setParentItem(this);

}

#include <igra.h>
#include <ploscica.h>
#include <zoga.h>
#include <zidaki.h>
#include <qDebug>
#include <QCursor>
#include <QMouseEvent>
#include <QTimer>


Ploscica *ploscica;

void Igra::on_a_clicked()
{
    exit(0);
}

Igra::Igra()
{
    scene = new QGraphicsScene(0,0,800,600);
    scene->setBackgroundBrush(Qt::black);
    setScene(scene);
    setMouseTracking(true);
}

void Igra::start()
{
    jestartan = 0;
    ploscica = new Ploscica();
    scene->addItem(ploscica);
    ploscica->grabMouse();


    zoga = new Zoga();
    scene->addItem(zoga);

    //postaviZidake();
    //mapa2();
    //mapachesenko();

}
void Igra::postaviZidake()
{
    for (size_t j = 0, m = 7; j < m; ++j)
    {
        for (size_t i = 0, n = 5; i < n; ++i)
        {

            Zidaki* block = new Zidaki();
            block->setPos(260+j*40,i*40);
            scene->addItem(block);
        }
    }
}

void Igra::mousePressEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
        zoga->startej();
    jestartan = 1;

}

void Igra::mouseMoveEvent(QMouseEvent *event)
{

    double mouseX = mapToScene(event->pos()).x() - ploscica->rect().width()/2;
    ploscica->setPos(mouseX,575);
    if(!jestartan)
    {
        zoga->setPos(ploscica->pos().x()  + ploscica->rect().width()/2- zoga->rect().width()/2 ,534);
    }



}

void Igra::keyPressEvent(QKeyEvent *event)
{
    if(event->key() && Qt::Key_Escape)
    {
        zoga->timer->stop();

    }
}

void Igra::mapa2()
{
    for(int i=0;i<10;i++)
    {
        Zidaki* block = new Zidaki();
        block->setPos(377+i*40,i*40);
        scene->addItem(block);
    }
    for(int i=0;i<10;i++)
    {
        Zidaki* block = new Zidaki();
        block->setPos(377-i*40,i*40);
        scene->addItem(block);
    }



}

void Igra::mapachesenko()
{
    //BETA
    int length=1;
    for(int i=0;i<10;i++)
    {
    for(int j=0;j<length;j++){
        Zidaki* block = new Zidaki();
        block->setPos(i*40,j*40);
        scene->addItem(block);

    }

    length++;
    }

    length=10;
    for(int i=0;i<10;i++)
    {
    for(int j=0;j<length;j++){
        Zidaki* block = new Zidaki();
        block->setPos(10*40+i*40,j*40);
        scene->addItem(block);

    }

    length--;
    }
}

void Igra::nared_mapo(int x, int y)
{
    for(int i=0;i<=7;i++)
        for(int j=0;j<=20;j++)
        {
            if(i==x && j==y)
            {
            Zidaki* block = new Zidaki();
            block->setPos(j*40,i*40);
            scene->addItem(block);
            return;
            }
        }
}

Igra::~Igra()
{
    delete zoga;
    delete ploscica;
    delete scene;
}




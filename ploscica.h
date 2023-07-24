#ifndef PLOSCICA
#define PLOSCICA
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>

class Ploscica: public QGraphicsRectItem
{
public:
    Ploscica();

    double getCenterX();
    void nastavmere(int i);
};

#endif // PLOSCICA


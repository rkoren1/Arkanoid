#ifndef IGRA
#define IGRA
#include <QGraphicsView>
#include <QGraphicsScene>
#include <zoga.h>
#include <ploscica.h>
#include <QKeyEvent>
#include <QPushButton>

class Igra: public QGraphicsView
{
private:
    bool jestartan;
    QPushButton *a ;

private slots:

    void on_a_clicked();
public:
    Igra();
    void start();
    void postaviZidake();
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void keyPressEvent(QKeyEvent * event );
    void mapa2();
    void mapachesenko();
    void nared_mapo(int x, int y);
    //
    QGraphicsScene *scene;
    Zoga* zoga;
    ~Igra();


};

#endif // IGRA

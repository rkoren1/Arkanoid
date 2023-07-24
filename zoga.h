#ifndef ZOGA
#define ZOGA
#include <QGraphicsEllipseItem>




class Zoga:  public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT
public:
    Zoga();
    double getCenterX();
    void startej();
    QTimer* timer;
public slots:
    void premikanje();
private:
    //metode
    void spremeniHitrostCeIzven();
    void odbojPloscice();
    void odbojZidaka();
    // atributi
    double xhitrost;
    double yhitrost;
};

#endif // ZOGA


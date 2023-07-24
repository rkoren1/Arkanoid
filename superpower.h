#ifndef SUPERPOWER_H
#define SUPERPOWER_H
#include <QGraphicsRectItem>

class Superpower : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Superpower();
public slots:
    void premikanje();
private:
    int yhitrost;
};

#endif // SUPERPOWER_H

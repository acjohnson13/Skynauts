#ifndef CANONBALL_H
#define CANONBALL_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QObject>

class canonball: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    canonball();
    int projmax;
    int damage;
public slots:
    void move();
};

#endif // CANONBALL_H

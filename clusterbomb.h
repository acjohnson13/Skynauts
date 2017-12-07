#ifndef CLUSTERBOMB_H
#define CLUSTERBOMB_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QObject>

class clusterbomb : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    clusterbomb();
    int projmax;
    int damage;

public slots:
    void move();
};


#endif // CLUSTERBOMB_H

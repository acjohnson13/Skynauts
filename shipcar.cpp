#include "shipcar.h"
#include <QKeyEvent>
#include <QGraphicsScene>
#include <QDebug>
#include "canonball.h"
#include "clusterbomb.h"
void shipcar::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_A){
        setPos(x()-10,y());
        if(pos().x() < 0){
            setPos(0, y());
        }
    }
    else if(event->key() == Qt::Key_D){
        setPos(x()+10, y());
        if(pos().x() > 980){
            setPos(980, y());
        }
    }
    else if(event->key() == Qt::Key_Left){
        setPos(x()-10,y());
        if(pos().x() < 0){
            setPos(0, y());
        }
    }
    else if(event->key() == Qt::Key_Right){
        setPos(x()+10,y());
        if(pos().x() > 980){
            setPos(980, y());
        }
    }
    else if(event->key() == Qt::Key_Space){
        //shoot a canonball
        canonball *ball = new canonball();
        ball->setPos(x(), y());
        scene()->addItem(ball);
    }
    else if((event->key() == Qt::Key_C) && (clusterinventory > 0)){
        //shoot a canonball
        clusterbomb *cluster = new clusterbomb();
        cluster->setPos(x(), y());
        scene()->addItem(cluster);
        clusterinventory = clusterinventory - 1;
    }
}

shipcar::shipcar()
{
    clusterinventory = 3;
    setPixmap(QPixmap(":/images/pirateship.png"));
    healthpoints = 200;
}

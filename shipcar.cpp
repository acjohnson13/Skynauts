#include "shipcar.h"
#include <QKeyEvent>
#include <QDebug>
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
}

shipcar::shipcar()
{
    setPixmap(QPixmap(":/images/pirateship.png"));
}

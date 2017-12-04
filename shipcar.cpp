#include "shipcar.h"
#include <QKeyEvent>
#include <QDebug>
void shipcar::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_A){
        setPos(x()-10,y());
    }
    else if(event->key() == Qt::Key_D){
        setPos(x()+10, y());
    }
    else if(event->key() == Qt::Key_Left){
        setPos(x()-10,y());
    }
    else if(event->key() == Qt::Key_Right){
        setPos(x()+10,y());
    }
}

shipcar::shipcar()
{
    setPixmap(QPixmap(":/images/pirateship.png"));
}

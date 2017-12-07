#include "clusterbomb.h"
#include <QTimer>
#include <QDebug>

clusterbomb::clusterbomb()
{
    damage = 75;
    projmax = 0;
    setPixmap(QPixmap(":/images/clusterbomb.png"));
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(50);

}

void clusterbomb::move()
{
    projmax = projmax + 1;
    if(projmax < 20){
        setPos(x() - 10, y() - 10);
    }
    else if(projmax > 20){
        setPos(x() - 10, y() + 10);
    }
    if(pos().y() >= 700){

        scene()->removeItem(this);
        //projmax = 0;
        delete(this);
    }

}

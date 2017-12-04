#ifndef SHIPCAR_H
#define SHIPCAR_H

#include <QGraphicsPixmapItem>
class shipcar : public QGraphicsPixmapItem
{
public:
    void keyPressEvent(QKeyEvent *event);
    shipcar();
};

#endif // SHIPCAR_H

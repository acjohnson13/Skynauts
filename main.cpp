#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsView>
#include "shipcar.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    QGraphicsScene *scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1080,720);

    shipcar * player1 = new shipcar();


    scene->addItem(player1);

    player1->setFlag(QGraphicsItem::ItemIsFocusable);
    player1->setFocus();

    QGraphicsView *view = new QGraphicsView(scene);
    view->setFixedSize(1080,720);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();
    return a.exec();
}

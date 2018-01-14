#include "Bullet.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>
#include <QList>
#include <Enemy.h>
Bullet::Bullet()
{
    // draw
    setRect(0,0,10,50);

    // connect
    QTimer * timer = new QTimer();
    connect(timer,SIGNAL(timeout()), this, SLOT(move()));

            timer->start(50);

}

void Bullet::move()
{
     // jezeli bullet styka sie z enemy to zniszcz kolidujące elementy
    QList<QGraphicsItem *> coliding_items = collidingItems();
    for (int i = 0, n = coliding_items.size(); i< n;i++){
        if(typeid(*(coliding_items[i])) == typeid(Enemy)){
            scene()->removeItem(coliding_items[i]);
            scene()->removeItem(this);

            delete coliding_items[i];
            delete this;
            return;
        }
    }


    setPos(x(),y()-10);
    if(pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
        qInfo() << "Bullet removed";
    }
}

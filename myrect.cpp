#include "myrect.h"
#include <QDebug>
#include <QKeyEvent>
#include "Bullet.h"
#include <QGraphicsScene>
#include <Enemy.h>
void myrect::keyPressEvent(QKeyEvent *event)
{
    //qInfo() << "key pressed ";
    if ( event->key() == Qt::Key_Left ){
        setPos(x()-10, y());
    }

    else if ( event->key() == Qt::Key_Right ){
        if(pos().x()+rect().width() < 800){
            setPos(x()+10, y());
        }
    }

    else if ( event->key() == Qt::Key_Space ){
        // create a boolet

        Bullet * bullet = new Bullet();
        //qInfo() << "Bullet created";
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}

void myrect::spawn()
{
    // create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}

#include "myrect.h"
#include <QDebug>
#include <QKeyEvent>
#include "Bullet.h"
#include <QGraphicsScene>
void myrect::keyPressEvent(QKeyEvent *event)
{
    //qInfo() << "key pressed ";
    if ( event->key() == Qt::Key_Left ){
        setPos(x()-10, y());
    }

    else if ( event->key() == Qt::Key_Right ){
        setPos(x()+10, y());
    }
    else if ( event->key() == Qt::Key_Up){
        setPos(x(), y()-10);
    }
    else if ( event->key() == Qt::Key_Down ){
        setPos(x(), y()+10);
    }
    else if ( event->key() == Qt::Key_Space ){
        // create a boolet

        Bullet * bullet = new Bullet();
        //qInfo() << "Bullet created";
        bullet->setPos(x(),y());
        scene()->addItem(bullet);
    }
}

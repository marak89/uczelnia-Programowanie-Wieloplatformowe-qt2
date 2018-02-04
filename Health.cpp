#include "Health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent){
    health = 3;
    setPlainText(QString("Możesz przepuścić jeszcze: ") + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}

void Health::decrease(){
    health--;
    setPlainText(QString("Możesz przepuścić jeszcze: ") + QString::number(health));
}

int Health::getHealth(){
    return health;
}

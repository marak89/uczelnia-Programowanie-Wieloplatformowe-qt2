#include "Score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent){
    score = 0;
    setPlainText(QString("Zniszczono: ") + QString::number(score));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
}

void Score::increase(){
    score++;
    setPlainText(QString("Zniszczono: ") + QString::number(score));
}

int Score::getScore(){
    return score;
}

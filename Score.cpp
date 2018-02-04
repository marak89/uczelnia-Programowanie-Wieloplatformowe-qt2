#include "Score.h"
#include <QString>
#include <QFont>

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent){
score = 0;
setPlainText(QString("Wynik: ") + QString::number(score));
setDefaultTextColor(Qt::red);
setFont(QFont("times",16));

}

void Score::increase()
{
    score++;
}

int Score::getScore()
{
    return score;
}

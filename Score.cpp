#include "Score.h"
#include <QString>
#include <QFont>

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent){
score = 0;
setPlainText(QString("Wynik: ") + QString::number(score));
setDefaultTextColor(Qt::red);
setFont(QFont("times",16));

}

void Score::inrease()
{
    score++;
}

int Score::getScore()
{
    return score;
}

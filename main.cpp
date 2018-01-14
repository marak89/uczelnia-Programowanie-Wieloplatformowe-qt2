//#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include "myrect.h"
#include <QGraphicsView>
#include <QDebug>
#include <QDate>
#include <QTimer>
#include "Score.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // scena
    QGraphicsScene * scene = new QGraphicsScene();

    // item na scene
    myrect * player = new myrect();
    player->setRect(0,0,100,100);

    // dodajemy obiekt do sceny
    scene->addItem(player);

    // make rect focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    // create the score
    //Score score = new Score();
    //scene->addItem(score);


    //qInfo() << "app started ";
    //qInfo() << "Date:" << QDate::currentDate();

    // add a view
    QGraphicsView * view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // show the view
    view->show();
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    player->setPos(view->width()/2 - (player->rect().width()/2) , view->height() - (player->rect().height()) - 1);


    // spawn enemies

    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));
timer->start(2000);
    return a.exec();
}

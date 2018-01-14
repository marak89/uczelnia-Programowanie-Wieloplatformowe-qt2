//#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include "myrect.h"
#include <QGraphicsView>
#include <QDebug>
#include <QDate>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // scena
    QGraphicsScene * scene = new QGraphicsScene();

    // item na scene
    myrect * rect = new myrect();
    rect->setRect(0,0,200,100);

    // dodajemy obiekt do sceny
    scene->addItem(rect);

    // make rect focusable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    qInfo() << "app started ";
    qInfo() << "Date:" << QDate::currentDate();

    // add a view
    QGraphicsView * view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // show the view
    view->show();

    return a.exec();
}

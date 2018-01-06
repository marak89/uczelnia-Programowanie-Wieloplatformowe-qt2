//#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    // scena
    QGraphicsScene * scene = new QGraphicsScene();

    // item na scene
    QGraphicsRectItem * rect = new QGraphicsRectItem();
    rect->setRect(0,0,100,100);

    scene->addItem(rect);

    // add a view
    QGraphicsView * view = new QGraphicsView(scene);
    view->show();


    return a.exec();
}

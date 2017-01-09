#include "mainwindow.h"
//#include "insulator.h"
#include "transportpoint.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QGraphicsScene scene(QRectF(-100,-100,300,300));
    QGraphicsView view(&scene);

    //Insulator* ins =
//    new Insulator(scene, -30, 100, 4, Q_NULLPTR);
    new TransportPoint(scene, -30, 100, 4, Q_NULLPTR);
    view.show();
    return a.exec();
}

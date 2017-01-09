#include "insulator.h"

//#include <QApplication>
#include <QtWidgets>
/*
Insulator::Insulator(QGraphicsScene &scene, QGraphicsItem *parent) : TransportPoint(parent)
{
}
*/

Insulator::Insulator(QGraphicsScene &scene, int x, int y, int zoom, QGraphicsItem *parent) : TransportPoint(parent)
{
    Insulator(scene, parent);
    this->posx = x;
    this->posy = y;
    this->zoom = zoom;

    QGraphicsLineItem* pLineItem1  = scene.addLine(QLineF(this->posx,this->posy-2*this->zoom,this->posx,this->posy+2*this->zoom),QPen(Qt::black));
    //pLineItem1 -> setFlags(QGraphicsItem::ItemIsMovable);

    QGraphicsLineItem* pLineItem2  = scene.addLine(QLineF(this->posx+1*this->zoom,this->posy-2*this->zoom,this->posx+1*this->zoom,this->posy+2*this->zoom),QPen(Qt::black));
    //pLineItem2 -> setFlags(QGraphicsItem::ItemIsMovable);


//    QGraphicsRectItem* pRectItem  = scene.addRect(QRectF(-30,-30,120,80), QPen(Qt::black), QBrush(Qt::green));
//    QGraphicsRectItem* pRectItem  = scene.addRect(boundingRect(), QPen(Qt::red), QBrush(Qt::green));
//    pRectItem -> setFlags(QGraphicsItem::ItemIsMovable);
//    QGraphicsPixmapItem* pPicsmapItem = scene.addPixmap(QPixmap(":/haus.jpg"));
//    pPicsmapItem -> setFlags(QGraphicsItem::ItemIsMovable);

    //QGraphicsTextItem* pTextItem = scene.addText("Move us with your mouse!");
    //pTextItem->setFlags(QGraphicsItem::ItemIsMovable);

    pLineItem1->setParentItem(this->pRectItem);
    pLineItem2->setParentItem(this->pRectItem);

}



/*
Insulator::Insulator(QGraphicsScene &scene)
{
    QGraphicsRectItem* pRectItem  = new QGraphicsRectItem(QRectF(-30,-30,120,80), QPen(Qt::black), QBrush(Qt::green));
    pRectItem -> setFlags(QGraphicsItem::ItemIsMovable);

    QGraphicsTextItem* pTextItem = new QGraphicsTextItem("Move us with your mouse!");
    pTextItem->setFlags(QGraphicsItem::ItemIsMovable);

    pTextItem->setParentItem(pRectItem);


    QGraphicsRectItem* pRectItem  = scene.addRect(QRectF(-30,-30,120,80), QPen(Qt::black), QBrush(Qt::green));
    pRectItem -> setFlags(QGraphicsItem::ItemIsMovable);
    QGraphicsPixmapItem* pPicsmapItem = scene.addPixmap(QPixmap(":/haus.jpg"));
    pPicsmapItem -> setFlags(QGraphicsItem::ItemIsMovable);

    QGraphicsTextItem* pTextItem = scene.addText("Move us with your mouse!");
    //pTextItem->setFlags(QGraphicsItem::ItemIsMovable);

    pTextItem->setParentItem(pRectItem);

}
*/





void Insulator::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
}

bool Insulator::isObscuredBy(const QGraphicsItem *item) const {
    //return true;
}

QPainterPath Insulator::opaqueArea() const {
   // return pRectItem->;
}

/*
int Insulator::type() const {

}
*/






/*
Insulator::~Insulator()
{
    delete pRectItem;
    delete pTextItem;

}
*/

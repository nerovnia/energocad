#include "insulator.h"

//#include <QApplication>
#include <QtWidgets>

Insulator::Insulator(QGraphicsScene &scene, QGraphicsItem *parent) : QGraphicsItemGroup(parent)
{
    QGraphicsLineItem* pLineItem1  = scene.addLine(QLineF(-30,120,-30,80),QPen(Qt::black));
    pLineItem1 -> setFlags(QGraphicsItem::ItemIsMovable);

    QGraphicsLineItem* pLineItem2  = scene.addLine(QLineF(-40,120,-40,80),QPen(Qt::black));
    pLineItem2 -> setFlags(QGraphicsItem::ItemIsMovable);


    QGraphicsRectItem* pRectItem  = scene.addRect(QRectF(-30,-30,120,80), QPen(Qt::black), QBrush(Qt::green));
    pRectItem -> setFlags(QGraphicsItem::ItemIsMovable);
    QGraphicsPixmapItem* pPicsmapItem = scene.addPixmap(QPixmap(":/haus.jpg"));
    pPicsmapItem -> setFlags(QGraphicsItem::ItemIsMovable);

    QGraphicsTextItem* pTextItem = scene.addText("Move us with your mouse!");
    //pTextItem->setFlags(QGraphicsItem::ItemIsMovable);

    pTextItem->setParentItem(pRectItem);

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

QRectF Insulator::boundingRect() const {
    return QRectF(-30,-30,120,80);
}

bool Insulator::isObscuredBy(const QGraphicsItem *item) const {

}

QPainterPath Insulator::opaqueArea() const {

}

int Insulator::type() const {

}







/*
Insulator::~Insulator()
{
    delete pRectItem;
    delete pTextItem;

}
*/

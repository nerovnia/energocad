#include <QtWidgets>
#include "transportpoint.h"

TransportPoint::TransportPoint(QGraphicsScene &scene, QGraphicsItem *parent) : QGraphicsItemGroup(parent)
{
}

TransportPoint::TransportPoint(QGraphicsScene &scene, int x, int y, int zoom, QGraphicsItem *parent) : QGraphicsItemGroup(parent)
{
    TransportPoint(scene, parent);
    this->posx = x;
    this->posy = y;
    this->zoom = zoom;
    this->parent = parent;

    //QGraphicsRectItem* pRectItem  = scene.addRect(boundingRect(), QPen(Qt::red), QBrush(Qt::green));
    this->pRectItem  = scene.addRect(boundingRect(), QPen(Qt::red), QBrush(Qt::green));
    this->pRectItem -> setFlags(QGraphicsItem::ItemIsMovable);

}

QRectF TransportPoint::boundingRect() const {
//    return QRectF(this->posx-1,this->posy-1,this->posx+1,this->posy+1);
    int width = 2*this->zoom/2;
    int height = 2*this->zoom/2;
    int x1 = this->posx - width/2;
    int y1 = this->posy - height/2;
    return QRectF(x1, y1, width, height);
}





void TransportPoint::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget){
}

bool TransportPoint::isObscuredBy(const QGraphicsItem *item) const {

}

QPainterPath TransportPoint::opaqueArea() const {

}

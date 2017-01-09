#ifndef TRANSPORTPOINT_H
#define TRANSPORTPOINT_H

#include "transportpoint.h"
//#include <QApplication>
#include <QtWidgets>

class TransportPoint : public QGraphicsItemGroup
{
protected:
    int posx = 0;
    int posy = 0;
    int zoom = 1;
    int height = 2;
    QGraphicsRectItem* pRectItem;

   QGraphicsItem *parent;
public:
    // Constructor mothods
    using QGraphicsItemGroup::QGraphicsItemGroup; // Using-declaration introduces a member of another namespace into current namespace or block scope
    TransportPoint() = default;
    TransportPoint(QGraphicsScene &scene, QGraphicsItem *parent = Q_NULLPTR);
    TransportPoint(QGraphicsScene &scene, int x, int y, int zoom, QGraphicsItem *parent = Q_NULLPTR);
    //setPosition(int posX, int posY);
    //setZoom(int zoom);

    // Overrided mothods
    QRectF boundingRect() const override;
    bool isObscuredBy(const QGraphicsItem *item) const override;
    QPainterPath opaqueArea() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR) override;
    //int type() const override;

    // Other mothods

    // Refrash method
    //void repaint();

    // Destructor mothods
    //using QGraphicsItemGroup::~QGraphicsItemGroup;
//    ~Insulator();
};

#endif // TRANSPORTPOINT_H

#ifndef INSULATOR_H
#define INSULATOR_H

#include <QtWidgets>
#include "transportpoint.h"

//class Insulator : public QGraphicsItemGroup
class Insulator : public TransportPoint
{
private:
/*
    int posx = 0;
    int posy = 0;
    int zoom = 1;
    int height = 4;
*/
public:
    // Constructor mothods
    using TransportPoint::TransportPoint;
    Insulator() = default;
    Insulator(TransportPoint &tp);
    //Insulator(QGraphicsScene &scene, QGraphicsItem *parent = Q_NULLPTR);
    Insulator(QGraphicsScene &scene, int x, int y, int zoom, QGraphicsItem *parent = Q_NULLPTR);
    //setPosition(int posX, int posY);
    //setZoom(int zoom);

    // Overrided mothods
    bool isObscuredBy(const QGraphicsItem *item) const override;
    QPainterPath opaqueArea() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR) override;
//    int type() const override;

    // Other mothods

    // Refrash method
    void repaint();

    // Destructor mothods
    //using QGraphicsItemGroup::~QGraphicsItemGroup;
//    ~Insulator();
};

#endif // INSULATOR_H

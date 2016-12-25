#ifndef INSULATOR_H
#define INSULATOR_H

#include <QtWidgets>

class Insulator : public QGraphicsItemGroup
{
private:
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    int height = 4;
    int posx = 0;
    int posy = 0;
public:
    // Constructor mothods
    using QGraphicsItemGroup::QGraphicsItemGroup;
    Insulator() = default;
    Insulator(QGraphicsScene &scene, QGraphicsItem *parent = Q_NULLPTR);

    // Overrided mothods
    QRectF boundingRect() const override;
    bool isObscuredBy(const QGraphicsItem *item) const override;
    QPainterPath opaqueArea() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = Q_NULLPTR) override;
    int type() const override;

    // Other mothods
    // Set coordinate mothods
    void setX1(int x) { this->x1 = x; };
    void setX2(int x) { this->x2 = x; };
    void setY1(int y) { this->y1 = y; };
    void setY2(int y) { this->y2 = y; };

    // Refrash method
    void repaint();

    // Destructor mothods
    //using QGraphicsItemGroup::~QGraphicsItemGroup;
//    ~Insulator();
};

#endif // INSULATOR_H

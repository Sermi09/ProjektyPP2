#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

namespace Shapes
{
class Rectangle : public Shape
{
private:
    int startX;
    int startY;
    int endX;
    int endY;

public:
    Rectangle(int _sx, int _sy, int _ex, int _ey) : startX(_sx), startY(_sy), endX(_ex), endY(_ey) {};

    virtual bool isIn(int x, int y) const{
    return (x>=startX) && (x <= endX) && (y>=startY) && (y <= endY);
    }

    int getX() const {return startX; };
    int getY() const {return startY; };

    int getXTo() const {return endX; };
    int getYTo() const {return endY; };

};
} // namespace Shapes

#endif // RECTANGLE_H

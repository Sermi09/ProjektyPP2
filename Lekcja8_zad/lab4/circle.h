#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

namespace Shapes
{
class Circle : public Shape
{
private:
    int middle_x;
    int middle_y;
    int radius;

public:
    Circle(int middle_x, int middle_y, int radius) : radius(radius), middle_x(middle_x), middle_y(middle_y){};
    int getX() const{
        return middle_x;
    }
    int getY() const{
        return middle_y;
    }
    int getRadius() const{
        return radius;
    }

    bool isIn(int x, int y) const{
        return pow((x-middle_x),2) + pow((y-middle_y),2) <= pow(radius,2);
    }
};
} // namespace Shapes

#endif // CIRCLE_H

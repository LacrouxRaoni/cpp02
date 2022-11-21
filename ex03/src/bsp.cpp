#include "Point.hpp"

float sign (Point point, Point p2, Point p3)
{
	Fixed r = (point.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (point.getY() - p3.getY());
    return r.toFloat();
}


bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}
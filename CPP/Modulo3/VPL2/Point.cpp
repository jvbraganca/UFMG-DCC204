#include <iostream>

#include "Point.h"

std::ostream & operator << (std::ostream &out, const Point &p) {
    out << "(" << p.getX() << ", " << p.getY() << ")";
    return out;
}

std::istream & operator >> (std::istream &in,  Point &p) {
    in >> p.x >> p.y;
    return in;
}

Point Point::operator + (const Point &p) const {
    Point sum(this->x, this->y);
    sum.x = sum.getX() + p.x;
    sum.y = sum.getY() + p.y;
    return sum;
}

Point& Point::operator += (Point &p) {
    this->x += p.getX();
    this->y += p.getY();
    return *this;
}
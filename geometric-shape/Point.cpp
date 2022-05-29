//
// Created by beloin on 29/05/2022.
//

#include "Point.h"

int Point::getX() const {
    return x;
}

void Point::setX(int x) {
    Point::x = x;
}

int Point::getY() const {
    return y;
}

void Point::setY(int y) {
    Point::y = y;
}

Point::Point(int x, int y) : x(x), y(y) {}

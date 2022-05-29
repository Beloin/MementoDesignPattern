//
// Created by beloin on 29/05/2022.
//

#include "GeometricShape.h"

GeometricShape::GeometricShape(Point *point, const string &color) : point(point), color(color) {}

Point *GeometricShape::getPoint() const {
    return point;
}

void GeometricShape::setPoint(Point *point) {
    GeometricShape::point = point;
}

const string &GeometricShape::getColor() const {
    return color;
}

void GeometricShape::setColor(const string &color) {
    GeometricShape::color = color;
}

ShapeMemento *GeometricShape::createMemento() {
    return new ShapeMemento(this->point, this->color);
}

void GeometricShape::setMemento(ShapeMemento* memento) {
    this->setPoint(memento->point);
    this->setColor(memento->color);
}

void GeometricShape::show(ostream &out) {
    out << "Shape with Point: (" << this->point->getX() << ", " << this->point->getY() << ")" << endl;
}


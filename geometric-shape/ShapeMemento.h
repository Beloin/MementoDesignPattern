//
// Created by beloin on 29/05/2022.
//

#ifndef MEMENTO_SHAPEMEMENTO_H
#define MEMENTO_SHAPEMEMENTO_H


#include "Point.h"
#include "string"

using namespace std;

class ShapeMemento {
private:
    Point *point;
    string color;
    ShapeMemento(Point *point, const string &color);

    friend class GeometricShape;
};


#endif //MEMENTO_SHAPEMEMENTO_H

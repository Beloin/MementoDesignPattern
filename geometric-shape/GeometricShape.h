//
// Created by beloin on 29/05/2022.
//

#ifndef MEMENTO_GEOMETRICSHAPE_H
#define MEMENTO_GEOMETRICSHAPE_H

#include "iostream"
#include "string"
#include "Point.h"
#include "ShapeMemento.h"

using namespace std;

class GeometricShape  {
private:
    Point *point;
    string color;
public:
    Point *getPoint() const;
    void setPoint(Point *point);
    const string &getColor() const;
    void setColor(const string &color);

    GeometricShape(Point *point, const string &color);

    ShapeMemento *createMemento();
    void setMemento(ShapeMemento*);

    void show(ostream &out);
};


#endif //MEMENTO_GEOMETRICSHAPE_H

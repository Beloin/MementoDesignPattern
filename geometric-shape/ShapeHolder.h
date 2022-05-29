//
// Created by beloin on 29/05/2022.
//

#ifndef MEMENTO_SHAPEHOLDER_H
#define MEMENTO_SHAPEHOLDER_H

#include "../utils/Stack.h"
#include "GeometricShape.h"
#include "iostream"

class ShapeHolder {
private:
    GeometricShape *shape;
    Stack<ShapeMemento> *mementoStack;

public:
    explicit ShapeHolder(GeometricShape *shape);

    void move(Point* point);
    void undo();
    void show(ostream &out);
};


#endif //MEMENTO_SHAPEHOLDER_H

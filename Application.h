//
// Created by beloin on 29/05/2022.
//

#ifndef MEMENTO_APPLICATION_H
#define MEMENTO_APPLICATION_H


#include "geometric-shape/ShapeHolder.h"

class Application {
public:
    ShapeHolder *createShapeHolder(Point *p, const string& color);
    void undo(ShapeHolder *holder);
    void move(Point *p, ShapeHolder * holder);
};


#endif //MEMENTO_APPLICATION_H

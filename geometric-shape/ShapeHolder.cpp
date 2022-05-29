//
// Created by beloin on 29/05/2022.
//

#include "ShapeHolder.h"

void ShapeHolder::move(Point *point) {
    auto memento = this->shape->createMemento();
    this->mementoStack->stack(memento);
    this->shape->setPoint(point);
}

void ShapeHolder::undo() {
    auto memento = this->mementoStack->unstack();
    this->shape->setMemento(memento);
}

ShapeHolder::ShapeHolder(GeometricShape *shape) : shape(shape) {
    this->mementoStack = new Stack<ShapeMemento>();
}

void ShapeHolder::show(ostream &out) {
    this->shape->show(out);
}

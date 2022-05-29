//
// Created by beloin on 29/05/2022.
//

#include "Application.h"

ShapeHolder *Application::createShapeHolder(Point *p, const string& color) {
    auto shape = new GeometricShape(p, color);
    return new ShapeHolder(shape);
}

void Application::undo(ShapeHolder *holder) {
    holder->undo();
}

void Application::move(Point *p, ShapeHolder *holder) {
    holder->move(p);
}


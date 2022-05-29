//
// Created by beloin on 27/05/2022.
//
#include <iostream>
#include "string"
#include "utils/Stack.h"
#include "utils/StackExceptions.h"
#include "Application.h"

using namespace std;

int main () {
    auto app = new Application();
    auto holder1 = app->createShapeHolder(new Point(12, 45), "Blue");
    auto holder2 = app->createShapeHolder(new Point(45, 12), "Yellow");

    cout << "1: ";
    holder1->show(cout);
    cout << "2: ";
    holder2->show(cout);

    cout << "Changing 1 to (67, 12)" << endl;
    holder1->move(new Point(67, 12));
    cout << "Changing 2 to (55, 55)" << endl;
    holder2->move(new Point(55, 55));

    cout << "1: ";
    holder1->show(cout);
    cout << "2: ";
    holder2->show(cout);

    cout << "Undo 1" << endl;
    holder1->undo();
    cout << "Undo 2" << endl;
    holder2->undo();

    cout << "1: ";
    holder1->show(cout);
    cout << "2: ";
    holder2->show(cout);

    return 0;
}
//
// Created by beloin on 27/05/2022.
//

#ifndef MEMENTO_STACK_H
#define MEMENTO_STACK_H

#include "string"
#include "Node.h"
#include "../geometric-shape/ShapeMemento.h"

using namespace std;

template<class T>
class Stack {
private:
    Node<T> *top;
    int currentSize = 0;

public:
    Stack();
    void stack(T* item);
    T *unstack();
};


template class Stack<string>;
template class Stack<ShapeMemento>;
#endif //MEMENTO_STACK_H

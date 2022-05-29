//
// Created by beloin on 27/05/2022.
//

#ifndef MEMENTO_NODE_H
#define MEMENTO_NODE_H

#include "string"
#include "../geometric-shape/ShapeMemento.h"

using namespace std;

template<class T>
class Node {
private:
    T *item;
    Node *previous = nullptr;

public:
    Node(T *item) : item(item) {}
    T *getItem() const;
    void setItem(T *item);
    Node *getPrevious() const;
    void setPrevious(Node *previous);
};

template class Node<string>;
template class Node<ShapeMemento>;
#endif //MEMENTO_NODE_H

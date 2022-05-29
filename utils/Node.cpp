//
// Created by beloin on 27/05/2022.
//

#include "Node.h"

template<class T>
T *Node<T>::getItem() const {
    return item;
}

template<class T>
void Node<T>::setItem(T *item) {
    Node::item = item;
}

template<class T>
Node<T> *Node<T>::getPrevious() const {
    return previous;
}

template<class T>
void Node<T>::setPrevious(Node *previous) {
    Node::previous = previous;
}
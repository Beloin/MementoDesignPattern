//
// Created by beloin on 27/05/2022.
//

#include "Stack.h"
#include "StackExceptions.h"


template<class T>
void Stack<T>::stack(T *item) {
    if (this->top == nullptr) {
        this->top = new Node<T>(item);
    } else {
        Node<T> *oldTop = this->top;
        this->top = new Node<T>(item);
        this->top->setPrevious(oldTop);
    }
    currentSize++;
}

template<class T>
T *Stack<T>::unstack() {
    if (currentSize == 0) {
        throw StackExceptions("Dont have Any stack");
    }
    Node<T> *unstackedTop = this->top;
    this->top = unstackedTop->getPrevious();
    T *item = unstackedTop->getItem();
    delete unstackedTop;
    currentSize--;
    return item;
}

template<class T>
Stack<T>::Stack() {
    top = nullptr;
}


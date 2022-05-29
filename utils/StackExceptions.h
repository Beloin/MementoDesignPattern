//
// Created by beloin on 27/05/2022.
//

#ifndef MEMENTO_STACKEXCEPTIONS_H
#define MEMENTO_STACKEXCEPTIONS_H

#include "exception"
#include "string"

using namespace std;
class StackExceptions : exception {
public:
    StackExceptions(string message);
    const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override;

private:
    string message;
};


#endif //MEMENTO_STACKEXCEPTIONS_H

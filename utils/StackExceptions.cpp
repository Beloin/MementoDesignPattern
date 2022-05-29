//
// Created by beloin on 27/05/2022.
//

#include "StackExceptions.h"

#include <utility>

StackExceptions::StackExceptions(string message) {
    this->message = std::move(message);
}

const char *StackExceptions::what() const noexcept {
    return this->message.c_str();
}

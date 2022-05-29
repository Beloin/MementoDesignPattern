cmake_minimum_required(VERSION 3.10)
project(memento)

set(CMAKE_CXX_STANDARD 14)

add_executable(memento
        main.cpp utils/Stack.cpp utils/Stack.h utils/Node.cpp utils/Node.h utils/StackExceptions.cpp utils/StackExceptions.h geometric-shape/Point.cpp geometric-shape/Point.h geometric-shape/GeometricShape.cpp geometric-shape/GeometricShape.h geometric-shape/ShapeHolder.cpp geometric-shape/ShapeHolder.h geometric-shape/ShapeMemento.cpp geometric-shape/ShapeMemento.h Application.cpp Application.h)

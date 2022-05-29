//
// Created by beloin on 29/05/2022.
//

#ifndef MEMENTO_POINT_H
#define MEMENTO_POINT_H


class Point {
private:
private:
    int x,y;
public:
    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    Point(int x, int y);
};


#endif //MEMENTO_POINT_H

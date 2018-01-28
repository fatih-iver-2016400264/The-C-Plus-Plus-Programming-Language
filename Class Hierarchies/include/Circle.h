#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"


class Circle:public Shape
{
    public:
        Circle(Point p, int rr); // constructor
        virtual ~Circle();

        Point center() const { return x; }
        void move(Point to) {x = to;}
        void draw() const;
        void rotate(int); // nice simple algorithm
    protected:

    private:
        Point x; // center
        int r; // radius
};

#endif // CIRCLE_H

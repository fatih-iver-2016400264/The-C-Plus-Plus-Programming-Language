#ifndef SHAPE_H
#define SHAPE_H

#include <vector>

class Point
{
    private:
        int x, y;
    public:
        Point() : x(0), y(0) {}
        Point(int x, int y) : x(x), y(y) {}
};

class Shape
{
    public:
        Shape();
        virtual ~Shape(); // destructor

        virtual Point center() const = 0; // pure virtual
        virtual void move(Point to) = 0;
        virtual void draw() const = 0; // draw on current "Canvas"
        virtual void rotate(int angle) = 0;

        void rotate_all( std::vector<Shape*>& v, int angle){ // rotate v's elements by angle degrees
            for(auto p : v) p -> rotate(angle);
        }

    protected:

    private:
};

#endif // SHAPE_H

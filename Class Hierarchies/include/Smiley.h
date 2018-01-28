#ifndef SMILEY_H
#define SMILEY_H

#include "Circle.h"
#include <vector>

class Smiley:public Circle // use a circle as the base for a face
{
    public:
        Smiley(Point p, int r): Circle{p, r}, mouth{nullptr} {}
        virtual ~Smiley()
        {
            delete mouth;
            for(auto p: eyes) delete p;
        }

        void move(Point to);
        void draw() const;
        void rotate(int);

        void add_eye(Shape* s){eyes.push_back(s);}
        void set_mouth(Shape* s);
        virtual void wink(int i); // wink eye number i

    protected:
    private:
        std::vector<Shape*> eyes;
        Shape* mouth;
};

#endif // SMILEY_H

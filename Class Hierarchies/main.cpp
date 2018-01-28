#include <iostream>
#include <istream>
#include "Shape.h"
#include "Circle.h"
#include "Smiley.h"

enum class Kind {circle, triangle, smiley};

Shape* read_shpae(std::istream& is) // read shape descriptions from input stream is
{
    // ... read shape header from it and find its Kind k...

    switch(Kind::circle){

    case Kind::circle:
        // read circle data{Point, int} into p and r
        //return new Circle{p, r}
        break;
    case Kind::triangle:
        // read triangle data {Point, Point, Point} into p1, p2, and p3
        //return new Triangle{p1, p2, p3}
        break;
    case Kind::smiley: // read smiley data {Point, int, Shape, Shape, Shape} into p, r, e1, e1, and m
        /*
        Smiley* ps = new Smiley{p,r};
        ps -> add_eye(e1);
        ps -> add_eye(e2);
        ps -> set_mouth(m);
        return ps;
        */
        break;
    }
}

using namespace std;

int main()
{
    cout << "Class Hierarchies!" << endl;
    return 0;
}

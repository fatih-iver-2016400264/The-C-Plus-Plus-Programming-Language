#include "Vector.h"

double sqrt(double d) // definition of sqrt()
{
    // ...algorithm as found in math textbook

}


Vector::Vector(int s) // definition of the constructor
    :elem{new double[s]}, sz{s} // initialize members
{
    //ctor
}

Vector::~Vector() // Definition of destructor
{
    //dtor
}

double& Vector::operator[](int i) // definition of subscripting
{
    return elem[i];
}

int Vector::size() // definition of size
{
    return sz;
}

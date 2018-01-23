#include "Vector.h" // get Vector's interface
#include <cmath>    // get the standard-library math function interface including sqrt()

using namespace std; // make std members visible

double sqrt1(double d) // definition of sqrt()
{
    // ...algorithm as found in math textbook
    return sqrt(d);
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

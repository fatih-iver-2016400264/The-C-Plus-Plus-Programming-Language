#include "Vector.h"
#include <stdexcept>
Vector::Vector(const Vector& a) // copy constructor
     :elem{new double[a.sz]}, sz{a.sz} // allocate space for elements
{
    for(int i = 0; i != sz; ++i) // copy element
        elem[i] = a.elem[i];
}

Vector& Vector::operator=(const Vector& a) // copy assignment
{
    double* p = new double[a.sz];

    for(int i = 0; i != sz; ++i) p[i] = a.elem[i];

    delete[] elem;

    elem = p;
    sz = a.sz;
    return *this;
}

Vector::Vector(Vector&& a) // move constructor
    : elem{a.elem}, sz{a.sz} // "grab the elements" from a
{
    a.elem = nullptr; // now a has no elements
    a.sz = 0;
}



#include "Vector.h"

Vector::Vector(std::initializer_list<double> lst) // initialize with a list
    : elem{new double[lst.size()]}, sz{static_cast<int>(lst.size())}
{
    std::copy(lst.begin(), lst.end(), elem); // copy from lst into elem
}

#include <iostream>
#include <complex>
#include <vector>

using namespace std;

int main()
{
    double d1 = 2.3; // initialize d1 with 2.3
    double d2 {2.3}; // initialize d2 with 2.3

    complex<double> z1 = 1; // a complex number with double-precision floating-point scalars
    complex<double> z2 {d1, d2};
    complex<double> z3 = {1, 2}; // the = is optional with { ... }

    vector<int> v {1, 2, 3, 4, 5, 6}; // a vector of int

    return 0;
}

#include <iostream>

#include <vector>
#include <complex>

#include "Vector.h"

using namespace std;

int main()
{
    cout << "Copy and Move!" << endl;
    return 0;
}


void test(complex<int> z1)
{
    complex<int> z2{z1}; // copy initialization
    complex<int> z3;
    z3 = z2; // copy assignment
}

void bad_copy(vector<int> v1)
{
        vector<int> v2 = v1; // copy v1's  representation into v2
        v1[0] = 2; // v2[0] is now also 2!
        v2[1] = 3; // v1[1] is now also 3!
}

Vector f(){

    Vector x(1000);
    Vector y(1000);
    Vector z(1000);
    //...

    z = x; // Copy assignment

    // y = move(x); // we get a move

    return z; // we get a move
}


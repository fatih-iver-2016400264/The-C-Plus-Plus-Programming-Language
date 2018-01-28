#include <iostream>

#include <vector>
#include <complex>

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



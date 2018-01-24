#include <iostream>
#include "Vector.h"

using namespace std;

int main()
{
    cout << "A Container!" << endl;
    return 0;
}

void f(int n){
    Vector v(n);
    {
        Vector v2(2*n);
        // ... use v and v2...
    } // v2 is destroyed here
} // v is destroyed here

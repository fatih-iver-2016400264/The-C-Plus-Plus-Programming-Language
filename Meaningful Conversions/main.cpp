#include <iostream>

using namespace std;

int main()
{
    double d = 2.2; // initialize floating-point number
    int i = 7; // initialize integer

    cout << "d: " << d << ", i: " << i << endl;

    d = d + i; // assign sum to d
    i = d * i; // assign product to i (truncating the double d*i to an int)

    cout << "d: " << d << ", i: " << i << endl;

    int i1 = 7.2; // i1 becomes 7 (surprise?)
    int i2 {7.2}; // error: floating-point to integer conversion
    int i3 = {7.2}; // error: floating-point to integer conversion (the = is redundant)

    // With auto, we use the = syntax because there is no type conversion involved that might cause problems.

    auto b = true; // a boolean
    auto ch = 'x'; // a char
    auto i = 123; // an int
    auto d = 1.2 // a double
    auto z = sqrt(y) // z has the type of whatever sqrt(y) returns

    return 0;
}

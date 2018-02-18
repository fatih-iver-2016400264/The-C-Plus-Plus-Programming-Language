#include <iostream>

using namespace std;

int main()
{
    cout << "Booleans!" << endl;

    bool b1 = 7; // 7 != 0, so b becomes true
    //bool b2{7}; // error: narrowing;

    int i1 = true; // i1 becomes 1
    int i2{true}; // i2 becomes 1

    bool a = true;
    bool b = true;

    bool x = a + b; // a+b is 2, so x becomes true
    bool y = a || b; // a || b is true, so y becomes true
    bool z = a - b; // a-b is 0, so z becomes false


    return 0;
}

void f(int a, int b)
{
    bool b1{a == b};
}

bool greater(int a, int b)
{
    return a > b;
}

void f2(int i)
{
    bool b1{i != 0};
}

void g(int* p)
{
    bool b = p; // narrows to true or false
    bool b2{p != nullptr}; // explicit test against nullptr

    if(p)  // equivalent to p != nullptr
    {
        // ...
    }

}

#include <iostream>

using namespace std;

void f() {} // Do nothing here

template<typename T>
void g(T x)
{
    cout << x << "";
}


template<typename T, typename... Tail>
void f(T head, Tail... tail)
{
    g(head);
    f(tail...);
    // do something to head
    // try again with tail
}

int main()
{
    cout << "Variadic Templates!" << endl;

    cout << "first: ";
    f(1, 2.2, "hello");

    cout << "\nsecond: ";
    f(0.2, 'c', "yuck!", 0,1,2);
    cout << "\n";


    return 0;
}


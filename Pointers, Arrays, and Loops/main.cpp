#include <iostream>

using namespace std;

int main()
{
    char v[6]; // array of 6 characters

    char* p; // pointer to character

    char *ptr =  &v[3]; // ptr points to v's fourth element
    char x = *ptr; // *ptr is the object that ptr points to

    T a[n]; // T[n]: array of Ts
    T* p; // T*: pointer to T
    T& r; // T&: reference to T
    T f(A); // f(A): function taking an argument of A returning a result of type T

    double* pd = nullptr;
    Link<Record>* 1st = nullptr; // pointer to a Link to a Record
    int x = nullptr; // error: nullptr is a pointer not an integer

    return 0;
}

void copy_fct(){

    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10]; // to become a copy of v1

    for(auto i = 0; i != 10; ++i){
        v2[i] = v1[i];
    }

}

void print(){

    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for(auto x: v){
        cout << x << "\n";
    }

    for(auto x: {0,1,2,3,4,5,6,7,8,9}){
        cout << x << "\n";
    }

}

void increment(){

    int v[] = {0,1,2,3,4,5,6,7,8,9};

    for(auto& x: v){++x;}

}

int count_x(char* p, char x){
    // count the number of occurrences of x in p[]
    // p is assumed to point to a zero-terminated array of char (or to nothing)

    if(p == nullptr) return 0;

    int count = 0;

    for(; *p =! 0; ++p)
        if (*p == x)
            ++counter;
    return count;

}


#include <iostream>

using namespace std;

struct Vector{

    int sz; // number of elements
    double* elem; // pointer to elements

};

void vector_init(Vector&v, int s){
    v.elem = new double[s]; // allocate an array of s doubles
    v.sz = s;
}

int main()
{
    Vector v;
    return 0;
}

double read_and_sum(int s)
{
    // read s integers from cin and return their sum; s is assummed to be positive

    Vector v;

    vector_init(v, s);

    int sum = 0;

    for(int i = 0; i != s; ++i){
        cin >> v.elem[i];
        sum += v.elem[i];
    }

    return sum;

}


#include <iostream>
#include "Vector.h"

using namespace std;

double read_and_sum(int s);

int main()
{
    cout << "Classes!" << endl;

    Vector v(6); // a Vector with 6 elements
    cout << read_and_sum(3);
    return 0;
}


double read_and_sum(int s){

    Vector v(s); // make a vector of s elements

    int sum = 0;

    for(int i = 0; i != s; ++i){
        cin >> v[i]; // read into elements
        sum += v[i]; // take the sum of the elements
    }
    return sum;
}

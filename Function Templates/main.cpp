#include <iostream>
#include <vector>
#include <list>
#include <complex>

using namespace std;

int main()
{
    cout << "Function Templates!" << endl;
    return 0;
}

template<typename Container, typename Value>
Value sum(const Container& c, Value v)
{
    for (auto x : c){v += x;}
    return v;
}

void user(vector<int>& vi, list<double>& ld, vector<complex<double> > & vc)
{
    int x = sum(vi, 0); // the sum of a vector of ints (add ints)
    double d = sum(vi, 0.0); // the sum of a vector of ints (add doubles)
    double dd = sum(ld, 0.0); // the sum of a list of doubles
    auto z = sum(vc, complex<double>{}); // the sum of a vector of complex<double>
    // the initial value is {0.0, 0.0}
}

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Less_than.h"

using namespace std;

int main()
{
    cout << "Function Objects!" << endl;

    Less_than<int> lti{42}; // lti(i) will compare i to 42 using < (i<42)

    Less_than<string> lts {"Backus"}; // lts(s) will compare s to "Backus" using < (s < "Backus")


    return 0;
}

void fct(int n, const string& s)
{

    Less_than<int> lti{42};
    Less_than<string> lts {"Backus"};

    bool b1 = lti(n); // true if n < 42
    bool b2 = lts(s); // true if s < "Backus"
}

template<typename C, typename P>
int count(const C& c, P pred)
{
    int cnt = 0;

    for(const auto& x : c)
        if(pred(x))
            ++cnt;
    return cnt;
}

void f(const vector<int>& vec, const list<string>& lst, int x, string& s)
{
 cout << "number of values less than " << x << ": " << count(vec, Less_than<int> {x}) << "\n";

 cout << "number of values less than " << s << ": " << count(lst, Less_than<int> {x}) << "\n";
}

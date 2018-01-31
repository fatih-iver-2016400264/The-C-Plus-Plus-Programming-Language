#include <iostream>
#include <string>
#include <list>
#include "Vector.h"

using namespace std;

int main()
{
    cout << "Parameterized Types!" << endl;

    Vector<char> vc(200); // vector of 200 characters
    Vector<string> vs(17); // vector of 17 strings
    Vector<list<int>> vli(45); // vector of 45 list of integers
    return 0;
}

void write(const Vector<string>& vs)
{
    for(int i = 0; i != vs.size(); ++i) cout << vs[i] << "\n";
}

void f2(Vector<string> vs)
{
    for(auto& s : vs) cout << s << "\n";
}

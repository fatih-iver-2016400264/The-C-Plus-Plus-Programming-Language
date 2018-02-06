#include <iostream>
#include <vector>


using namespace std;

int main()
{
    cout << "Aliases!" << endl;
    return 0;
}

template<typename C>
using Value_type = typename C::value_type;

template<typename Container>
void algo(Container& c)
{
    vector<Value_type<Container>> vec;
}

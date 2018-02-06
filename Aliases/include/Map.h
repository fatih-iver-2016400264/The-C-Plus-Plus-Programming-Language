#ifndef MAP_H
#define MAP_H

#include <string>

using namespace std;

template<typename Key, typename Value>
class Map
{
    public:

        Map();
        virtual ~Map();

    protected:

    private:
};

template<typename Value>
using String_map = Map<string, Value>;

//String_map<int> m; // m is a Map<string, int>

#endif // MAP_H

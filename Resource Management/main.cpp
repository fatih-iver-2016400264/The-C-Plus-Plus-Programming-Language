#include <iostream>

#include <thread>
#include <vector>

using namespace std;

int main()
{
    cout << "Resource Management!" << endl;

    return 0;
}
/*

Vector init(n){

    //thread t{heartbeat}; // run heartbeat concurrently (on its own thread)

    //my_threads.push_back(move(t)) // move t into my_threads

    //... more initialization...

    Vector vec(n);
    for(int i = 0; i != vec.size(); ++i) vec[i] = 777;
    return vec; // move res out of main()


}

auto v = init(); // start heartbeat and initialize v

*/

#include <iostream>
#include <stdexcept>
#include "Vector.h"

using namespace std;

int main()
{
    cout << "Error Handling!" << endl;
    return 0;
}

void f(Vector& v){

    try{ // exceptions here are handled by the handler defined below

        v[v.size()] = 7; // try to access beyond the end of v

    }

    catch(out_of_range){ // oops: out_of_range error
        // handle range error
    }
}

void test(){

    try{
        Vector v(-27);
    }
    catch(length_error){
        // handle negative size
    }
    catch(bad_alloc){
        // handle memory exhaustions
    }
}

constexpr double C = 299792.458; // km/s

void f(double speed){
    constexpr double local_max = 160.0/(60*60); // 160 km/h == 160.0(90*90) km/s

    //static_assert(speed < C, "can't go that fast"); // error: speed must be a constant
    static_assert(local_max < C, "can't go that fast"); // OK
}


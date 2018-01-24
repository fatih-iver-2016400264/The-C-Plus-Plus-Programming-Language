#ifndef VECTOR_H
#define VECTOR_H

#include <istream>

class Vector
{
    public:
        Vector(int s): sz{s}, elem{new double[s]} // constructor: acquire resources
        {
            for(int i = 0; i != s; ++i) elem[i] = 0; // initialize elements
        }

        virtual ~Vector() {delete[] elem;} // destructor: release resources

        double& operator[](int i){ return elem[i];}
        int size() const {return sz;}

        Vector(std::initializer_list<double>); // initialize with a list

        void push_back(double); // add element at end increasing the size by one

        /*Vector read(istream& is){
            Vector v;
            for(double d; is >> d;) // read floating-point values into d
                v.push_backd(d) // add to v
            return v
        }*/


    protected:

    private:
        double* elem; // elem points to an array of sz doubles
        int sz;
};

#endif // VECTOR_H

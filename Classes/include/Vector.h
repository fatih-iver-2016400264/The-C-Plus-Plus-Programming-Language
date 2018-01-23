#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector(int s): elem{new double[s]}, sz{s}{} // construct a Vector
        virtual ~Vector();

        double& operator[](int i){return elem[i];} // element access: subscripting
        int size(){return sz;}

    protected:

    private:
        int sz; // the number of elements
        double* elem; // pointer to the elements

};

#endif // VECTOR_H

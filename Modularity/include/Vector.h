#ifndef VECTOR_H
#define VECTOR_H

double sqrt(double); // the square root function takes a double and returns a double

class Vector
{
    public:
        Vector(int s);
        virtual ~Vector();

        double& operator[](int i);
        int size();

    protected:

    private:
        double* elem; // points array of sz doubles
        int sz;
};

#endif // VECTOR_H

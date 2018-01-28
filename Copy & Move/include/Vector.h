#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector(int s): elem{new double[s]}, sz{s} {} // constructor: establish invariant, acquire resources

        virtual ~Vector(){ delete[] elem; } // destructor: release resources

        Vector(const Vector& a); // copy constructor
        Vector& operator=(const Vector& a); // copy assignment

        double operator[](int index){ return elem[index];}
        // const double& operator[](int i) const;

        int size() const { return sz;}

    protected:

    private:
        double* elem;
        int sz;
};

#endif // VECTOR_H

#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
    public:
        Vector(int s);
        virtual ~Vector();

        double& operator[](int i);
        int size();

    protected:

    private:
        int sz;
        double* elem;
};

#endif // VECTOR_H

#ifndef VECTOR_H
#define VECTOR_H


class Vector
{
    public:
        Vector(int s): elem{new double[s]}, sz{s} {} // constructor: establish invariant, acquire resources

        virtual ~Vector(){ delete[] elem; } // destructor: release resources

        Vector(const Vector& a); // copy constructor
        Vector& operator=(const Vector& a); // copy assignment

        Vector(Vector&& a); // move constructor
        Vector& operator=(const Vector&& a); // move assignment

        double operator[](int index){ return elem[index];}
        const double& operator[](int index) const { return elem[index];}

        int size() const { return sz;}

    protected:

    private:
        double* elem;
        int sz;
};

/*Vector operator+(Vector& a, Vector& b)
{
    Vector res(a.size());

    if(a.size() == b.size()){

        for(int i = 0; i != a.size(); ++i)
            res[i] = a[i] + b[i];

    }

    return res;

}*/

/*void f(const Vector& x, const Vector& y, const Vector& z){
    Vector r;
    r = x + y + z;
}*/

#endif // VECTOR_H

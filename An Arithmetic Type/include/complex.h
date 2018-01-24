#ifndef COMPLEX_H
#define COMPLEX_H


class complex
{
    public:
        complex(): re{0}, im{0} {} // default complex: {0,0}
        complex(double r): re{r}, im{0} {} // construct complex from one scalar
        complex(double r, double i): re{r}, im{i} {} // construct complex from two scalars

        virtual ~complex();

        double real() const {return re;}
        double imag() const {return im;}

        void real(double d) {re = d;}
        void imag(double d) {im = d;}

        complex& operator+=(complex z) // add to re and im
        {
            re += z.re;
            im += z.im;
            return *this;
        }

        complex& operator-=(complex z)
        {
            re -= z.re;
            im -= z.im;
            return *this;
        }

        complex& operator*=(complex); // defined out-of-class somewhere
        complex& operator/=(complex); // defined out-of-class somewhere

    protected:

    private:
        double re, im; // representation: wto doubles

};

complex operator+(complex a, complex b) {return a += b;}
complex operator-(complex a, complex b) {return a -= b;}
complex operator-(complex a) {return {-a.real(), -a.imag()};} // unary minus

//complex operator*(complex a, complex b) {return a *= b;}
//complex operator/(complex a, complex b) {return a /= b;}

bool operator==(complex a, complex b) { return a.real() == b.real() && a.imag() == b.imag();}
bool operator!=(complex a, complex b) { return !(a == b);}


#endif // COMPLEX_H

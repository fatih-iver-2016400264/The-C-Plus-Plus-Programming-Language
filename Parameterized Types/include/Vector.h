#ifndef VECTOR_H
#define VECTOR_H

#include <stdexcept>

template <typename T>
class Vector
{
    public:

        Vector(int s): sz{s}, elem{new T[s]} {} // constructor: establish invariant, acquire resources

        virtual ~Vector() { delete[] elem; } // destructor: release resources

        T& operator[](int index) {return elem[index];}
        const T& operator[](int index) const
        {
            if (index < 0 || size() <= index) throw std::out_of_range{"Vector::operator[]"};
        return elem[index];
        }

        int size() const {return sz;}

        // copy and move operations


    protected:

    private:
        T* elem; // elem points to an array of sz elements of type T
        int sz;
};

template<typename T>
T* begin(Vector<T>& x)

{
    return x.size() ? &x[0] : nullptr;
}

template<typename T>
T* end(Vector<T>& x)

{
    return begin(x) + x.size();
}



#endif // VECTOR_H

#ifndef CONTAINER_H
#define CONTAINER_H

#include <iostream>

class Container
{
    public:
        virtual double& operator[](int) = 0; // pure virtual functions
        virtual int size() const = 0; // const member function
        virtual ~Container() {} // destructor

    protected:

    private:
};

/*void use1(Container& c)
{
    const int sz = c.size();

    for(int i = 0; i != sz; ++i) std::cout << c[i] << "\n";
}*/


#endif // CONTAINER_H

#ifndef LIST_CONTAINER_H
#define LIST_CONTAINER_H

#include "Container.h"
#include <list>
#include <stdexcept>

class List_container:public Container // List_container implements Container
{
    public:
        List_container(){} // empty list
        List_container(std::initializer_list<double> li): ld{li} {}

        virtual ~List_container();

        double& operator[](int i);
        int size() const {return ld.size();}
    protected:

    private:
        std::list<double> ld; // (standard-library ) list of doubles
};

double& List_container::operator[](int i)
{
    for(auto& x: ld){
        if(i == 0) return x;
        --i;
    }
    throw std::out_of_range{"List container"};
}

#endif // LIST_CONTAINER_H

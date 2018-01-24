#ifndef VECTOR_CONTAINER_H
#define VECTOR_CONTAINER_H

#include "Container.h"

class Vector_container:public Container // Vector_container implements Container
{
    public:
        //Vector_container(int s): v{s} {} // Vector of elements
        virtual ~Vector_container();

        //double& operator[](int i){return v[i];}
        //int size() const {return v.size();}

    protected:

    private:
       // Vector v
};

#endif // VECTOR_CONTAINER_H

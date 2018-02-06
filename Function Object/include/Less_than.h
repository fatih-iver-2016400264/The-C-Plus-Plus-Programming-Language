#ifndef LESS_THAN_H
#define LESS_THAN_H

template<typename T>
class Less_than
{
    public:
        Less_than(const T& v): val(v) {}
        virtual ~Less_than() {}

        bool operator()(const T& x)  {return x < val;} // call operator

    protected:

    private:
        const T val; // value to compare against
};



#endif // LESS_THAN_H

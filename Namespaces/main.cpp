#include <iostream>
#include <complex>

namespace My_code{

    class complex{/*......*/
    public:
        complex(int a_, int b_): a{a_}, b{b_} {};
    private:
        int a;
        int b;
    };
    complex sqrt(complex);
    int main();

}

int My_code::main(){
    std::complex<int> z{1,2};
    auto z2 = sqrt(z);
    std::cout << '{' << z2.real() << ',' << z2.imag() << "}\n";
}

int main()
{
    std::cout << "Namespaces!" << std::endl;
    return My_code::main();
}

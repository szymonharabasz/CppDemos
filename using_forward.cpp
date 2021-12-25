//
// Created by Szymon Harabasz on 25.12.21.
//

#include <iostream>
#include <valarray>
#include "using_forward.h"
using namespace std::literals::string_literals;

class Foo {
    int a;
    std::string b;
    double c;
    std::valarray<int> d;
public:
    Foo(int aa, std::string bb, double cc, std::valarray<int> dd) : a(aa), b(bb), c(cc), d(dd) { }
    virtual ~Foo() {
        std::cout << "Destruction of Foo with " << a << " " << b << " " << c << std::endl;
    }
};

void using_forward() {
    std::valarray arr{1,2,3};
    auto ptr = my_make_unique<Foo>(1, "Hello"s, 3.1415, arr);
}
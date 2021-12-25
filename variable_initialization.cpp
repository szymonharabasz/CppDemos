//
// Created by Szymon Harabasz on 25.12.21.
//

#include <chrono>
#include <map>
#include <variant>
#include <vector>
#include <complex>
#include <iostream>
#include "variable_initialization.h"

void variable_initialization() {
    double d1 = 2.3;
    double d2 {2.3};
    double d3 = {2.3};

    std::complex<double> z1 = 1;
    std::complex<double> z2 {d1,d2};
    std::complex<double> z3 = {d1,d2};

    std::vector<int> v {1,2,3,4,5,6};

    int i1 = 7.8; // warning
    std::cout << "i1 = " << i1 << std::endl;
    // int i2 {7.8}; // error

    auto bb {true};
}
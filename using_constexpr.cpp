//
// Created by Szymon Harabasz on 25.12.21.
//

#include "variable_initialization.h"
#include <chrono>
#include <map>
#include <variant>
#include <vector>
#include <complex>
#include <iostream>
#include "using_constexpr.h"

constexpr double square(double x) {
    return x*x;
}

void using_constexpr() {
    constexpr int dmv = 17;
    int var = 17;
    const double sqv = sqrt(var); // probably computet at compile time

    constexpr double max1 = 1.4 * square(17);
    // constexpr double max2 = 1.4 * square(var); // error RHS is not a constant expression
    const double max3 = 1.4 * square(var); // OK, calculated at runtime
}
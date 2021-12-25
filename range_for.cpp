//
// Created by Szymon Harabasz on 25.12.21.
//

#include "using_constexpr.h"
#include "variable_initialization.h"
#include <chrono>
#include <map>
#include <variant>
#include <vector>
#include <complex>
#include <iostream>
#include "range_for.h"

void range_for() {
    for (auto x : {10,21,32,43,54,65}) {
        std::cout << x << ", ";
    }
    std::cout << std::endl;
}

void range_for_with_reference() {
    int v[] {0,1,2,3,4,5,6,7,8,9};
    for (auto& x : v) {
        ++x;
    }
    for (auto x : v) {
        std::cout << x << ", ";
    }
    std::cout << std::endl;
}
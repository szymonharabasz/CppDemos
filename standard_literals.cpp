//
// Created by Szymon Harabasz on 25.12.21.
//

#include "move_operations.h"
#include "structural_binding.h"
#include "enum_class.h"
#include "Entry.h"
#include "variant_type.h"
#include "range_for.h"
#include "using_constexpr.h"
#include "variable_initialization.h"
#include <chrono>
#include <map>
#include <variant>
#include <vector>
#include <complex>
#include <iostream>
#include "standard_literals.h"

using namespace std::literals::chrono_literals;
using namespace std::literals::string_literals;

constexpr std::complex<double> operator""_j(long double arg) {
    return {0, static_cast<double>(arg)};
}

void standard_literals() {
    auto a = 30h;
    auto b = 30min;
    auto c = 30s;
    auto d = 30ms;
    auto e = 30ns;
    auto f = 30us;
    std::cout << b / c << std::endl;

    auto g = "Hello, world"s;

    auto z = 2 + 3i;
    auto[re,im] = z;
    std::cout << re << " " << im << std::endl;

    auto w = 4. + 5._j;
}
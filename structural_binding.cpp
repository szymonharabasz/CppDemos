//
// Created by Szymon Harabasz on 25.12.21.
//

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
#include "structural_binding.h"

struct Item {
    std::string name;
    int i;
};

Item make_item(std::string s, int i) {
    return {s, i};
}

void structural_binding() {
    auto [s, i] = make_item("hello", 4);
    std::cout << s << " " << i << std::endl;

    std::__1::map<std::string,int> m;
    m["foo"] = 43;
    m["bar"] = 44;
    for (auto& [k,v] : m) {
        std::cout << "m[" << k << "] = " << v << std::endl;
    }
    std::complex<double> z = {1,2};
    // auto [re, im] = z+2.; // in book it's said it should work, also with z+2;
}
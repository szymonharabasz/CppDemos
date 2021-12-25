//
// Created by Szymon Harabasz on 25.12.21.
//

#include "deducing_ctor_template_params.h"
#include "standard_literals.h"
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
#include "function_objects_and_lambdas.h"

template<typename T>
class Less_than {
    const T val;
public:
    Less_than(const T& v) : val(v) {}
    bool operator()(const T& x) const { return x < val; }
};

void function_objects_and_lambdas() {
    std::vector<int> v {1,2,3,4,5,6,7};
    int x = 4;
    std::cout << std::count_if(v.begin(), v.end(), Less_than{x}) << std::endl;
    std::cout << std::count_if(v.begin(), v.end(), [&](int a){ return a < x++; }) << std::endl;
    std::cout << std::count_if(v.begin(), v.end(), [&x](int a){ return a < x++; }) << std::endl;
    std::cout << std::count_if(v.begin(), v.end(), [=](int a){ return a < x; }) << std::endl;
    // std::cout << std::count_if(v.begin(), v.end(), [=x](int a){ return a < x; }) << std::endl; // not known to these tools
    std::cout << std::count_if(v.begin(), v.end(), [](int a){ return a < 3; }) << std::endl;
    std::cout << std::count_if(v.begin(), v.end(), [](auto& a){ return a < 3; }) << std::endl;
}
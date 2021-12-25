//
// Created by Szymon Harabasz on 25.12.21.
//

#include "function_objects_and_lambdas.h"
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
#include "template_features.h"

template<class T> constexpr T viscosity = 0.4;
template<typename T1, typename T2>
constexpr bool Assignable = std::is_assignable< T1 &,T2>::value;

void template_features() {
    auto vis1 = 2*viscosity<double>;
    auto vis2 = 2*viscosity<float>;
}

template<typename T>
void testing_assignable() {
    static_assert(Assignable<T&,double>, "Cannot assign double");
    static_assert(Assignable<T&,std::string>, "Cannot assign string");
}

template<typename T>
void compile_time_if(T& target) {
    if constexpr(std::is_pod<T>::value) {
        //
    } else {
        //
    }
}
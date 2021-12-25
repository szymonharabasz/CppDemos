//
// Created by Szymon Harabasz on 25.12.21.
//

#include "range_for.h"
#include "using_constexpr.h"
#include "variable_initialization.h"
#include <chrono>
#include <map>
#include <variant>
#include <vector>
#include <complex>
#include <iostream>
#include "variant_type.h"
#include "Entry.h"


void variant_type(Entry *pe) {
    if (std::holds_alternative<int>(pe->v)) {
        std::cout << std::get<int>(pe->v) << std::endl;
    }
}
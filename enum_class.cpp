//
// Created by Szymon Harabasz on 25.12.21.
//

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
#include "enum_class.h"

enum class Traffic_light { green, yellow, red };

Traffic_light& operator++(Traffic_light& t) {
    switch (t) {
        case Traffic_light::green: return t = Traffic_light::yellow;
        case Traffic_light::yellow: return t = Traffic_light::red;
        case Traffic_light::red: return t = Traffic_light::green;
    }
}

void enum_class() {
    Traffic_light light = Traffic_light::green;
    Traffic_light next = ++light;
}
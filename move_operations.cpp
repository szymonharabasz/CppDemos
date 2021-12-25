//
// Created by Szymon Harabasz on 25.12.21.
//

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
#include "move_operations.h"

class X {
public:
    int getVal() const { return 5; }
};

class Y {
public:
    Y(int v) : val(v) {}
    Y(const X &x) : val(x.getVal()) {}
    Y(const Y &y) = default;
    Y(Y&& y) = default;
    Y& operator=(const Y&) = delete;
    Y& operator=(Y&& other) {
        std::cout << "Move assigment is called" << std::endl;
        val = other.val;
        return *this;
    }
    int getVal() const { return val; }

private:
    int val;
};

Y val_times_2(Y& v) {
    Y result(2*v.getVal());
    return result;
}

void move_operations() {
    X x;
    Y y1(x);
    Y y2(y1);
    // y2 = y1; // is deleted
    y2 = std::move(y1); // OK
    Y y3 = val_times_2(y2);
}
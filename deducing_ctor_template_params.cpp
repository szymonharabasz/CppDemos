//
// Created by Szymon Harabasz on 25.12.21.
//

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
#include "deducing_ctor_template_params.h"

void deducing_ctor_template_params() {
    std::pair p = {2, 3.4};
    std::cout << p.second << std::endl;
}
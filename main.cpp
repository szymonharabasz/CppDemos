#include <iostream>
#include <complex>
#include <vector>
#include <variant>
#include <map>
#include <chrono>
#include "variable_initialization.h"
#include "using_constexpr.h"
#include "range_for.h"
#include "variant_type.h"
#include "Entry.h"
#include "enum_class.h"
#include "structural_binding.h"
#include "move_operations.h"
#include "standard_literals.h"
#include "deducing_ctor_template_params.h"
#include "function_objects_and_lambdas.h"
#include "template_features.h"
#include "variadic_templates.h"
#include "using_forward.h"
#include "weak_pointers.h"
#include "deallocate_shared_array.h"
#include "random_number_generation.h"
#include "erase_remove.h"
#include "semantic_types.h"

int main() {
    variable_initialization();
    using_constexpr();
    range_for();
    range_for_with_reference();
    Entry *pe = new Entry;
    pe->v = 4;
    variant_type(pe);
    move_operations();
    standard_literals();
    deducing_ctor_template_params();
    function_objects_and_lambdas();
    string_map<int> m;
    variadic_templates();
    using_forward();
    weak_pointers();
    deallocate_shared_array();
    random_number_generation();
    erase_remove();
    semantic_types();

    return 0;
}

cmake_minimum_required(VERSION 3.20)
project(CppDemos)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppDemos main.cpp variable_initialization.cpp using_constexpr.cpp range_for.cpp variant_type.cpp Entry.h
        enum_class.cpp structural_binding.cpp move_operations.cpp standard_literals.cpp deducing_ctor_template_params.cpp
        function_objects_and_lambdas.cpp template_features.cpp using_concepts.cpp variadic_templates.cpp using_forward.h
        using_forward.cpp weak_pointers.cpp weak_pointers.h deallocate_shared_array.cpp deallocate_shared_array.h random_number_generation.cpp random_number_generation.h erase_remove.cpp erase_remove.h semantic_types.cpp semantic_types.h)

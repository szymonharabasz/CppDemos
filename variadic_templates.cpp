//
// Created by Szymon Harabasz on 25.12.21.
//

#include "variadic_templates.h"

void variadic_templates() {
    print("Hello"s, 42, "world", 3.14, sum(1, 2, 3, 4, 5, 6, 7), sum2(1, 2, 3, 4, 5, 6, 7));
    print2("Hello"s, 42, "world", 3.14, sum(1, 2, 3, 4, 5, 6, 7), sum2(1, 2, 3, 4, 5, 6, 7));
}

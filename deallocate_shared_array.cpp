//
// Created by Szymon Harabasz on 30.12.21.
//

#include <cstddef>
#include <string>
#include "deallocate_shared_array.h"

void deallocate_shared_array() {
    const std::size_t NUMBER_OF_STRINGS{100};
    std::shared_ptr<std::string> array_of_strings1(new std::string[NUMBER_OF_STRINGS], CustomArayDeleter<std::string>());

    std::shared_ptr<std::string> array_of_strings2(new std::string[NUMBER_OF_STRINGS],
                                                   std::default_delete<std::string[]>());



}
//
// Created by Szymon Harabasz on 30.12.21.
//

#ifndef CPPDEMOS_DEALLOCATE_SHARED_ARRAY_H
#define CPPDEMOS_DEALLOCATE_SHARED_ARRAY_H

#include <iostream>

template<typename T>
struct CustomArayDeleter {
    void operator()(T const* pointer) {
        std::cout << "Deleting an array" << std::endl;
        delete [] pointer;
    }
};

void deallocate_shared_array();

#endif //CPPDEMOS_DEALLOCATE_SHARED_ARRAY_H

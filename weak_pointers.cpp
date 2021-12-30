//
// Created by Szymon Harabasz on 30.12.21.
//

#include "weak_pointers.h"

void do_something(const std::weak_ptr<ResourceType>& weak_resource) {
    if (!weak_resource.expired()) {
        std::shared_ptr<ResourceType> shared_resource = weak_resource.lock();
        std::cout << "Weak resource hasn't expired." << std::endl;
    }
}

void weak_pointers() {
    auto shared_resource(std::make_shared<ResourceType>());
    std::weak_ptr<ResourceType> weak_resource(shared_resource);
    do_something(weak_resource);
    shared_resource.reset();
    do_something(weak_resource);
}
//
// Created by Szymon Harabasz on 30.12.21.
//

#ifndef CPPDEMOS_WEAK_POINTERS_H
#define CPPDEMOS_WEAK_POINTERS_H

#include <memory>
#include <iostream>

class ResourceType {};
void do_something(const std::weak_ptr<ResourceType>& weak_resource);
void weak_pointers();

#endif //CPPDEMOS_WEAK_POINTERS_H

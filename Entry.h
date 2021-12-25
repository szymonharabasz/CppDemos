//
// Created by Szymon Harabasz on 25.12.21.
//

#include <string>
#include <variant>

#ifndef CPPDEMOS_ENTRY_H
#define CPPDEMOS_ENTRY_H
struct Node{};
struct Entry{
    std::string name;
    std::variant<Node*, int> v;
};

#endif //CPPDEMOS_ENTRY_H

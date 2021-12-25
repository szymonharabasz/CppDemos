//
// Created by Szymon Harabasz on 25.12.21.
//

#ifndef CPPDEMOS_VARIADIC_TEMPLATES_H
#define CPPDEMOS_VARIADIC_TEMPLATES_H

#include <iostream>
using namespace std::literals::string_literals;

template<typename T, typename... Tail>
void print(T head, Tail... tail) {
    std::cout << head << ' ';
    if constexpr(sizeof...(tail) > 0) {
        print(tail...);
    }
}

template<typename ...T>
void print2(T&&... args) {
    (std::cout << ... << args) << '\n';
}

template<typename... T>
int sum(T... v) {
    return (v + ... + 0);
}

template<typename... T>
int sum2(T... v) {
    return (0 + ... + v);
}

template<typename Res, typename... Ts>
std::vector<Res> to_vector(Ts&&... ts) {
    std::vector<Res> res;
   // (res.push_back(ts) ...); //doesn't work here
    return res;
}

void variadic_templates();

#endif //CPPDEMOS_VARIADIC_TEMPLATES_H

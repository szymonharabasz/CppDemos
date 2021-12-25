//
// Created by Szymon Harabasz on 25.12.21.
//

#ifndef CPPDEMOS_USING_FORWARD_H
#define CPPDEMOS_USING_FORWARD_H
template<typename T, typename... Args>
std::unique_ptr<T> my_make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T{std::forward<Args>(args)...});
}

void using_forward();

#endif //CPPDEMOS_USING_FORWARD_H

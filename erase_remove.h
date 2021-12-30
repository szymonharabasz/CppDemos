//
// Created by Szymon Harabasz on 30.12.21.
//

#ifndef CPPDEMOS_ERASE_REMOVE_H
#define CPPDEMOS_ERASE_REMOVE_H

class IncreasingNumberGenerator {
public:
    int operator()() noexcept { return number++; }

private:
    int number{ 0 };
};

class ToSquare {
public:
    constexpr int operator()(const int value) const noexcept { return value*value; }
};

class IsAnOddNumber {
public:
    constexpr bool operator()(const int value) const noexcept { return (value % 2) != 0; }
};

void erase_remove();

#endif //CPPDEMOS_ERASE_REMOVE_H

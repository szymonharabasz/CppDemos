//
// Created by Szymon Harabasz on 30.12.21.
//

#include <iostream>
#include "random_number_generation.h"

const size_t AMOUNT_OF_NUMBERS{ 100 };

Numbers createVectorFilledWithRandomNumbers() {
    RandomNumberGenerator<short> randomNumberGenerator{};
    Numbers randomNumbers(AMOUNT_OF_NUMBERS);
    std::generate(begin(randomNumbers), end(randomNumbers), std::ref(randomNumberGenerator));
    return randomNumbers;
}

void printNumbersOnStdOut(const Numbers& numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}

void random_number_generation() {
    printNumbersOnStdOut(createVectorFilledWithRandomNumbers());
}

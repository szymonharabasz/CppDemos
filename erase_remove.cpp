//
// Created by Szymon Harabasz on 30.12.21.
//

#include "erase_remove.h"

#include <vector>
#include <algorithm>
#include <iostream>

using Numbers = std::vector<int>;

void printNumbers(Numbers numbers) {
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;
}

void erase_remove() {
    const std::size_t AMOUNT_OF_NUMBERS{ 100 };
    Numbers numbers( AMOUNT_OF_NUMBERS );
    printNumbers(numbers);
    std::generate(begin(numbers), end(numbers), IncreasingNumberGenerator());
    printNumbers(numbers);
    std::transform(begin(numbers), end(numbers), begin(numbers), ToSquare());
    printNumbers(numbers);
    numbers.erase(std::remove_if(begin(numbers), end(numbers), IsAnOddNumber()), end(numbers));
    printNumbers(numbers);

}

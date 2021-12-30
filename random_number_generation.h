//
// Created by Szymon Harabasz on 30.12.21.
//

#ifndef CPPDEMOS_RANDOM_NUMBER_GENERATION_H
#define CPPDEMOS_RANDOM_NUMBER_GENERATION_H

#include <random>
using Numbers = std::vector<short>;

template<typename NUMTYPE>
class RandomNumberGenerator {
public:
    RandomNumberGenerator() {
        merseneTwisterEngine.seed(randomDevice());
    }

    NUMTYPE operator()() {
        return distribution(merseneTwisterEngine);
    }

private:
    std::random_device randomDevice;
    std::uniform_int_distribution<NUMTYPE> distribution;
    std::mt19937_64 merseneTwisterEngine;
};

void random_number_generation();

#endif //CPPDEMOS_RANDOM_NUMBER_GENERATION_H

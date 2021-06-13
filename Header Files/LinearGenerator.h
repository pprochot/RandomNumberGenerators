#pragma once
#include <cmath>
#include "IDiscreteGenerator.h"

class LinearGenerator : IDiscreteGenerator {
private:
    ullong x;
    static ullong initializeSeed();

public:
    const ullong m, a;
    LinearGenerator(ullong m, ullong a);
    ullong generate() override;
    static LinearGenerator defaultGenerator();
};
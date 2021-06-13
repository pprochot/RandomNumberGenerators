#pragma once
#include "UniformDistributionGenerator.h"

class BinomialDistributionGenerator : IDiscreteGenerator {
private:
    const int n;
    const double p;
    UniformDistributionGenerator udGenerator;

public:
    explicit BinomialDistributionGenerator(LinearGenerator& generator, int n, double p);

    ullong generate() override;
};

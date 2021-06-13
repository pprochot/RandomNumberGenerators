#pragma once
#include "UniformDistributionGenerator.h"
#include "cmath"

class PoissonDistributionGenerator : IDiscreteGenerator {
private:
    const double lambda;
    const double q = exp(-lambda);
    UniformDistributionGenerator udGenerator;

public:
    explicit PoissonDistributionGenerator(LinearGenerator& generator, double lambda);

    ullong generate() override;
};
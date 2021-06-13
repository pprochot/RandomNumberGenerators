#pragma once
#include "UniformDistributionGenerator.h"

class ExponentialDistributionGenerator : IContinuousGenerator {
private:
    const double lambda;
    UniformDistributionGenerator udGenerator;

public:
    explicit ExponentialDistributionGenerator(LinearGenerator& udGenerator, double lambda);

    double generate() override;
};
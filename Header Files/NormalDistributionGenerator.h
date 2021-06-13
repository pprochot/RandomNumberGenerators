#pragma once
#include "UniformDistributionGenerator.h"

class NormalDistributionGenerator : IContinuousGenerator {
private:
    UniformDistributionGenerator udGenerator;

public:
    NormalDistributionGenerator(LinearGenerator& generator);
    double generate() override;
};
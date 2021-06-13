#pragma once
#include "IDiscreteGenerator.h"
#include "UniformDistributionGenerator.h"
class BernoulliDistributionGenerator : IDiscreteGenerator {
private:
    const double p;
    UniformDistributionGenerator udGenerator;

public:
    explicit BernoulliDistributionGenerator(LinearGenerator& udGenerator, double p);
    ullong generate() override;
};

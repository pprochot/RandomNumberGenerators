#pragma once
#include "LinearGenerator.h"
#include "IContinuousGenerator.h"
#include <functional>

class UniformDistributionGenerator : IContinuousGenerator {
private:
    LinearGenerator linearGenerator;
    std::function<double(ullong)> func;

public:
    explicit UniformDistributionGenerator(LinearGenerator& linearGenerator, double from, double to);
    double generate() override;
};
#include "../Header Files/ExponentialDistributionGenerator.h"

ExponentialDistributionGenerator::ExponentialDistributionGenerator(LinearGenerator& generator, double lambda)
: udGenerator(UniformDistributionGenerator(generator, 0, 1)), lambda(lambda) {
}

double ExponentialDistributionGenerator::generate() {
    return -log(udGenerator.generate()) / lambda;
}

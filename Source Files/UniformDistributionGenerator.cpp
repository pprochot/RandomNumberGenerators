#include "../Header Files/UniformDistributionGenerator.h"

UniformDistributionGenerator::UniformDistributionGenerator(LinearGenerator &linearGenerator, double from, double to)
        : linearGenerator(linearGenerator) {
    double z = to - from;
    this->func = [=](ullong x) -> double {
        return  (double) (x * z / linearGenerator.m) + from;
    };
}

double UniformDistributionGenerator::generate() {
    return func(linearGenerator.generate());
}


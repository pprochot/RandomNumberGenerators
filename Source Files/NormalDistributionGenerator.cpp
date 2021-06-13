#include "../Header Files/NormalDistributionGenerator.h"

NormalDistributionGenerator::NormalDistributionGenerator(LinearGenerator &generator) :
        udGenerator(UniformDistributionGenerator(generator, 0, 1)) {
}

/**
 * Box-Muller transformation
 */

double NormalDistributionGenerator::generate() {
    double u = udGenerator.generate();
    double v = udGenerator.generate();

    double o = 2 * M_PI * v;
    double p = sqrt(-2 * log(u));


    return p * cos(o);
}

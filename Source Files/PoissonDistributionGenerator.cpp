#include "../Header Files/PoissonDistributionGenerator.h"

PoissonDistributionGenerator::PoissonDistributionGenerator(LinearGenerator &generator, double lambda)
        : udGenerator(UniformDistributionGenerator(generator, 0, 1)), lambda(lambda) {

}

ullong PoissonDistributionGenerator::generate() {
    int x = 0;
    double s = q, p = q;
    double u = udGenerator.generate();

    while (u > s) {
        x += 1;
        p *= lambda / x;
        s += p;
    }

    return x;
}

#include "../Header Files/BinomialDistributionGenerator.h"

BinomialDistributionGenerator::BinomialDistributionGenerator(LinearGenerator &generator, int n, double p) :
        udGenerator(UniformDistributionGenerator(generator, 0, 1)), n(n), p(p) {
}

ullong BinomialDistributionGenerator::generate() {
    int x = 0;

    for (int i = 0; i < n; i++) {
        if (udGenerator.generate() <= p) {
            x += 1;
        }
    }

    return x;
}

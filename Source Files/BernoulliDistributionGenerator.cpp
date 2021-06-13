#include "../Header Files/BernoulliDistributionGenerator.h"

BernoulliDistributionGenerator::BernoulliDistributionGenerator(LinearGenerator& generator, double p)
        : udGenerator(UniformDistributionGenerator(generator, 0, 1)), p(p) {

}

ullong BernoulliDistributionGenerator::generate() {
    return udGenerator.generate() <= p ? 1 : 0;
}

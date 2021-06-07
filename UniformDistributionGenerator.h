#ifndef GENERATORS_UNIFORMDISTRIBUTIONGENERATOR_H
#define GENERATORS_UNIFORMDISTRIBUTIONGENERATOR_H

#include "LinearGenerator.h"

class UniformDistributionGenerator {
private:
    LinearGenerator linearGenerator;

public:
    explicit UniformDistributionGenerator(LinearGenerator linearGenerator);
    double generate();
};


#endif //GENERATORS_UNIFORMDISTRIBUTIONGENERATOR_H

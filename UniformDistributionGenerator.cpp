//
// Created by pawel on 07.06.2021.
//

#include "UniformDistributionGenerator.h"

double UniformDistributionGenerator::generate() {
    return (double) linearGenerator.generate() / (double) linearGenerator.m;
}

UniformDistributionGenerator::UniformDistributionGenerator(LinearGenerator linearGenerator)
        : linearGenerator(linearGenerator) {

}

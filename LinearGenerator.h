#ifndef GENERATORS_LINEARGENERATOR_H
#define GENERATORS_LINEARGENERATOR_H

#include <cmath>


typedef unsigned long long ullong;

class LinearGenerator {
private:
    ullong x;
    static ullong initializeSeed();

public:
    const ullong m, a;
    LinearGenerator();
    ullong generate();

};


#endif //GENERATORS_LINEARGENERATOR_H

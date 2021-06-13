#pragma once
typedef unsigned long long ullong;

class IDiscreteGenerator {
    virtual ullong generate() = 0;
};

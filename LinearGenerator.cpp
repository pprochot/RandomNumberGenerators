#include "LinearGenerator.h"
#include <chrono>

LinearGenerator::LinearGenerator() : m((ullong) std::pow(2, 31) - 1),
                                     a((ullong) std::pow(7, 5)) {
    this->x = initializeSeed();
}

ullong LinearGenerator::generate() {
    x = (a * x) % m;
    return x;
}

ullong LinearGenerator::initializeSeed() {
    auto now = std::time(nullptr);
    auto date = std::localtime(&now);

    int year = 1900 + date->tm_year;
    int month = 1 + date->tm_mon;
    int day = date->tm_mday;
    int hour = date->tm_hour;
    int minute = date->tm_min;
    int second = date->tm_sec == 60 ? 59 : date->tm_sec;

    // Random numbers (1991-1995)
    auto preSeed = second + 60 * (minute + 60 * (hour + 24 * (day - 1 + 31 * (month - 1 + 12 * year))));
    return preSeed | 1; // Set last bite to 1
}



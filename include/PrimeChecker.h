#ifndef PRIME_CHECKER_H
#define PRIME_CHECKER_H

#include <string>

class PrimeChecker {
public:
    static std::string checkPrime(const std::string& input);

private:
    static bool isPrime(int num);
    static bool isBlank(const std::string& s);
};

#endif

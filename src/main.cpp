#include "PrimeChecker.h"
#include <iostream>

int main() {
    std::cout << PrimeChecker::checkPrime("-1") << std::endl;    // Invalid: Negative number
    std::cout << PrimeChecker::checkPrime("0") << std::endl;     // No
    std::cout << PrimeChecker::checkPrime("3") << std::endl;     // Yes
    std::cout << PrimeChecker::checkPrime("1000") << std::endl;  // No
    std::cout << PrimeChecker::checkPrime("1001") << std::endl;  // Invalid: Out of range
    std::cout << PrimeChecker::checkPrime("27") << std::endl;    // No
    std::cout << PrimeChecker::checkPrime("r") << std::endl;     // Invalid: Non-numeric input
    std::cout << PrimeChecker::checkPrime(" ") << std::endl;     // Invalid: Blank input
    return 0;
}

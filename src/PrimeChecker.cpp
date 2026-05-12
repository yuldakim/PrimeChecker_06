#include "PrimeChecker.h"
#include <cmath>
#include <stdexcept>

bool PrimeChecker::isBlank(const std::string& s) {
    for (char c : s) {
        if (c != ' ' && c != '\t' && c != '\n' && c != '\r') {
            return false;
        }
    }
    return true;
}

bool PrimeChecker::isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= static_cast<int>(std::sqrt(num)); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

std::string PrimeChecker::checkPrime(const std::string& input) {
    int number;
    try {
        size_t pos;
        number = std::stoi(input, &pos);
        if (pos != input.size()) {
            return "Invalid: Non-numeric input";
        }
    } catch (const std::invalid_argument&) {
        if (isBlank(input)) {
            return "Invalid: Blank input";
        }
        return "Invalid: Non-numeric input";
    } catch (const std::out_of_range&) {
        return "Invalid: Out of range";
    }

    if (number < 0) {
        return "Invalid: Negative number";
    } else if (number == 0 || number == 1) {
        return "No";
    } else if (number > 1000) {
        return "Invalid: Out of range";
    } else if (isPrime(number)) {
        return "Yes";
    } else {
        return "No";
    }
}

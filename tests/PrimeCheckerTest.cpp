#include "PrimeChecker.h"
#include <cassert>
#include <iostream>
#include <string>

void testNegativeNumber() {
  assert(PrimeChecker::checkPrime("-1") == "Invalid: Negative number");
}

void testZero() { assert(PrimeChecker::checkPrime("0") == "No"); }

void testPrimeNumber() { assert(PrimeChecker::checkPrime("3") == "Yes"); }

void testBoundaryNumber1000() {
  assert(PrimeChecker::checkPrime("1000") == "No");
}

void testOutOfRangeNumber() {
  assert(PrimeChecker::checkPrime("1001") == "Invalid: Out of range");
}

void testNonPrimeNumber() { assert(PrimeChecker::checkPrime("27") == "No"); }

void testNonNumericInput() {
  assert(PrimeChecker::checkPrime("r") == "Invalid: Non-numeric input");
}

void testBlankInput() {
  assert(PrimeChecker::checkPrime(" ") == "Invalid: Blank input");
}

int main() {
  testNegativeNumber();
  testZero();
  testPrimeNumber();
  testBoundaryNumber1000();
  testOutOfRangeNumber();
  testNonPrimeNumber();
  testNonNumericInput();
  testBlankInput();

  std::cout << "All tests passed!" << std::endl;
  return 0;
}

cmake_minimum_required(VERSION 3.14)
project(PrimeChecker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(prime_checker src/PrimeChecker.cpp)

add_executable(prime_checker_app src/main.cpp)
target_link_libraries(prime_checker_app prime_checker)
target_compile_options(prime_checker_app PRIVATE --coverage)
target_link_options(prime_checker_app PRIVATE --coverage)

enable_testing()
add_executable(prime_checker_test tests/PrimeCheckerTest.cpp)
target_link_libraries(prime_checker_test prime_checker)
add_test(NAME PrimeCheckerTest COMMAND prime_checker_test)

target_compile_options(prime_checker PRIVATE --coverage)
target_link_options(prime_checker PRIVATE --coverage)

target_compile_options(prime_checker_test PRIVATE --coverage)
target_link_options(prime_checker_test PRIVATE --coverage)

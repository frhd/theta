#include <iostream>
// use math library
#include <cmath>

// a function to calculate the square root of a number
double square_root(const double a) {
    // if a is negative, throw an exception
    if (a < 0.0) {
        throw "Can not take square root of negative number";
    }
    // otherwise, return the square root of a
    return sqrt(a);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    // call square_root function
    std::cout << square_root(2.0) << std::endl;
    return 0;
}

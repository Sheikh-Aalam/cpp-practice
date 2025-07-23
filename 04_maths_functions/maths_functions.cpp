#include <iostream>
#include <cmath>
int main()
{
    // ceil and floor
    float f = 34.44f;
    std::cout << "The ceil value of f is " << std::ceil(f) << std::endl;
    std::cout << "The floor value of f is " << std::floor(f) << std::endl;

    // abs
    int a{-24};
    std::cout << "The absolute value of a is " << std::abs(a) << std::endl;

    // exp
    int b{3};
    std::cout << "The exponent value of b is " << std::exp(b) << std::endl;

    // pow
    std::cout << "The value of 3 to the power 4 is " << std::pow(3, 4) << std::endl;

    // log
    std::cout << "The value of log 2 to the base e is " << std::log(2) << std::endl;
    std::cout << "The value of log 10000 to the base 10 is " << std::log10(10000) << std::endl;

    // round (halfway numbers are rounded away from 0)
    std::cout << "5.84 is rounded to " << std::round(5.84) << std::endl;
    std::cout << "2.5 is rounded to " << std::round(2.5) << std::endl;
    std::cout << "3.5 is rounded to " << std::round(3.5) << std::endl;
    std::cout << "3.4 is rounded to " << std::round(3.4) << std::endl;

    //sqrt
    std::cout << "Square root of 81 is " << std::sqrt(81) <<std::endl;

    return 0;
}
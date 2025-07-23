#include <iostream>
#include <iomanip>

int main()
{
    // setprecision() : the number of digits printed out for a floating point. Default is 6

    int a = 3.1415926535897932384626433832795;

    std::cout << std::endl;
    std::cout << "a (default precision(6)) : " << a << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;

    // If the precision is bigger than supported by the type, you'll just print garbage.
    return 0;
}
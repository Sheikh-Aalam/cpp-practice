#include <iostream>

int main()
{
    int value{6};
    // postfix increment
    std::cout << "The value is " << value++ << std::endl;        // first executed then incremented-> 6
    std::cout << "The value after ++ is " << value << std::endl; // after increment -> 7

    // prefix increment
    value = 6;                                                      // value reset to 6
    std::cout << "The value after reset is " << value << std::endl; // value is 6
    std::cout << "The value is " << ++value << std::endl;           // first incremented then executed-> 7

    return 0;
}
#include <iostream>

int main()
{
    int value{6};
    //postfix decrement
    std::cout << "The value is " << value-- << std::endl;        // first executed then decremented-> 6
    std::cout << "The value after -- is " << value << std::endl; // after decrement -> 5

    // prefix decrement
    value = 6;                                                      // value reset to 6
    std::cout << "The value after reset is " << value << std::endl; // value is 6
    std::cout << "The value is " << --value << std::endl;           // first decremented then executed-> 5

    return 0;
}
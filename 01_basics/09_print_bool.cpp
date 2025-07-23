#include <iostream>

int main()
{
    bool green_light{true};
    bool red_light{false};

    std::cout << "green light is " << green_light << std::endl;
    std::cout << "red light is " << red_light << std::endl;

    std::cout << std::boolalpha;
    std::cout << "green light is " << green_light << std::endl;
    std::cout << "red light is " << red_light << std::endl;

    std::cout << "size of bool is " << sizeof(bool) << std::endl;
    return 0;
}
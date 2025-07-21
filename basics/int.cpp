#include <iostream>

int main()
{
    int a = 15;         // decimal
    int b = 017;        // octal
    int c = 0x0f;       // hexadecimal
    int d = 0b00001111; // binary: representation valid till c++ 14 version.
    std::cout << "a is: " << a << std::endl;
    std::cout << "b is: " << b << std::endl;
    std::cout << "c is: " << c << std::endl;
    std::cout << "d is: " << d << std::endl;
    std::cout << "size is: " << sizeof(int) << std::endl;
    return 0;
}
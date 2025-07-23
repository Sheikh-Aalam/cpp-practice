#include <iostream>

int main()
{
    int a = 10;

    a += 10; // a = a + 10

    std::cout << "The value after adding is " << a << std::endl; //20

    a -= 5; // a = a - 5

    std::cout << "The value after subtracting is " << a << std::endl; //15

    a *= 4; // a = a * 4

    std::cout << "The value after multiplying is " << a << std::endl; //60

    a /= 5; // a = a / 5

    std::cout << "The value after dividing is " << a << std::endl; //12

    a %= 10; // a = a % 10

    std::cout << "The value after modulus is " << a << std::endl; //2

    return 0;
}
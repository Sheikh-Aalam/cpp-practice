#include <iostream>

int main(){
short int a =6, b=7;

std::cout << "size of a is " << sizeof(a) << " and that of b is " << sizeof(b) << std::endl;

auto sum = a+b;
std::cout << "size of sum is " << sizeof(sum) << std::endl;
    return 0;
}
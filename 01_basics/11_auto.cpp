#include <iostream>

int main(){
auto ch1 {24};
auto  ch2{5.0};
auto ch3{6.58f};
auto ch4{6.5204l};
auto ch5{'a'};

std::cout << sizeof(ch1) << std::endl;
std::cout << sizeof(ch2) << std::endl;
std::cout << sizeof(ch3) << std::endl;
std::cout << sizeof(ch4) << std::endl;
std::cout << sizeof(ch5) << std::endl;
    return 0;
}
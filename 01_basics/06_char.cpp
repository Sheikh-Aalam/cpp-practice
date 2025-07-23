#include <iostream>

int main(){
char ch1 {'A'} ,ch2 {'r'} , ch3 {'r'} ,ch4 {'o'} ,  ch5 {'w'};

std::cout << ch1 << ch2 << ch3 << ch4 << ch5 << std::endl;

std::cout << "size is "<< sizeof(char) << std::endl;

char value {65};
std::cout << "value represents character  " << value << std::endl;

std::cout << "value represents integer  " << static_cast<int> (value) << std::endl;
    return 0;
}
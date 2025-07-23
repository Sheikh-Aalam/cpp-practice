#include <iostream>

int main(){
int length, breadth, area;
std::cout << "Enter length : " << std::endl;
std::cin >> length;
std::cout << "Enter breadth : " << std::endl;
std::cin >> breadth;
area = length * breadth;
std::cout << "Area is " << area << std::endl;
    return 0;
}
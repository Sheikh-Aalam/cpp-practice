#include <iostream>

int main(){
int length, breadth, area;
std::cout << "Enter length and breadth seperated by spaces: " << std::endl;
std::cin >> length >> breadth;

area = length * breadth;
std::cout << "Area is " << area << std::endl;
    return 0;
}
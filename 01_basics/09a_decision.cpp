#include <iostream>

int main(){
bool green_light{true};
bool red_light{false};
if (green_light)
{
    std::cout << "Go ahead!" << std::endl;
}
else std::cout << "Stop" << std::endl;

if (red_light)
{
    std::cout << "The light is red" << std::endl;
}
else std::cout << "The light is green" << std::endl;

    return 0;
}
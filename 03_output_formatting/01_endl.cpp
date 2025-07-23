#include <iostream>

int main(){
//std::endl : places a new line character on the output stream.
    //       This is identical to placing '\n' on the output stream.
    
    std::cout << "Hello";
    std::cout << "World";
    
    std::cout << std::endl;
    
    std::cout << "-------------" << std::endl;
    
    std::cout << "Hello" << std::endl;
    std::cout << "World" << std::endl;
    
    std::cout << std::endl;
    
    std::cout << "Hello\n";
    std::cout << "World\n";
    
    
    //===================================================================
    std::cout << std::endl;
    return 0;
}
#include <iostream>

int main(){
//std::flush : flushes the output buffer to its final destination. 
    std::cout << "This is a nice message...." << std::endl << std::flush;
    //After this std::flush, we're sure that at this line, the message has been sent 
    //to the stream. This may be important in some applications.
    
    //===================================================================
    std::cout << std::endl;
    return 0;
}
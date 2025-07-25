#include <iostream>

using namespace std;
int main()
{
    const int c{54};
    cout << "c is " << c << endl;

    // c = 87;  can't modify
    
    const float f {1.56f};
    cout << "f is : " << f << endl;

    // f = 5.554f; can't modify
    
    return 0;
}
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "The range of short is (" << std::numeric_limits<short>::min()
         << " , " << std::numeric_limits<short>::max() << ")" << endl;

    // Overflow

    short a{32766}, b{2};
    cout << "a is " << a << endl
         << "b is " << b << endl;

    short c = a + b;
    cout << "c is " << c << endl;

    // Underflow

    short d{-32768}, e{-1};
    cout << "d is " << d << endl
         << "e is " << e << endl;

    short f = d + e;
    cout << "f is " << f << endl;

    return 0;
}
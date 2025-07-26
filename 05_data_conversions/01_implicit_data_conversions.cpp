#include <iostream>

using namespace std;

int main()
{
    int price {25};
    double units {5.82};
    auto total = price * units; // compiler converts int to double for operation

    cout << "total price is "  << price << endl;
    cout << "size of total is : " << sizeof(total) << endl;

    int x {4};
    float y {45.55};

    x = y; // assigning float to int. Narrowing conversion will occur and x will store 45.
    
    cout << "x is " << x << endl;

    return 0;
}
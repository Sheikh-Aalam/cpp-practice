#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int value {8457856};

    cout << "In binary : " << bitset<16>(value) << endl;
    cout << "In decimal : " << value << endl;

    // shift left by 3 bits
    value = value << 3; // the value in decimal is multiplied by 2^3 but this rule fails when a 1 is cut off

    cout << "In binary : " << bitset<16>(value) << endl;
    cout << "In decimal : " << value << endl;

    // shift right by 5 bits
    value = value >> 5; // the value in decimal is divided by 2^5 but this rule fails when a 1 is cut off

    cout << "In binary : " << bitset<16>(value) << endl;
    cout << "In decimal : " << value << endl;

    return 0;
}
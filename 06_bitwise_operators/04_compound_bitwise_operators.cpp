#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main()
{
    unsigned int var1{25}, var2{54};

    cout << endl;
    cout << "var1 (bin) : " << bitset<8>(var1) << setw(30) << " var1 (dec) : " << var1 << endl;
    cout << "var2 (bin) : " << bitset<8>(var2) << setw(30) << " var2 (dec) : " << var2 << endl;
    cout << endl;

    // compound left shift
    cout << "Compound left shift : \n" << endl;
    var1 <<= 2;
    var2 <<= 2;
    cout << "var1 (bin) : " << bitset<8>(var1) << setw(30) << " var1 (dec) : " << var1 << endl;
    cout << "var2 (bin) : " << bitset<8>(var2) << setw(30) << " var2 (dec) : " << var2 << endl;
    cout << endl;

    // compound right shift
    cout << "Compound right shift : \n" << endl;
    var1 >>= 3;
    var2 >>= 3;
    cout << "var1 (bin) : " << bitset<8>(var1) << setw(30) << " var1 (dec) : " << var1 << endl;
    cout << "var2 (bin) : " << bitset<8>(var2) << setw(30) << " var2 (dec) : " << var2 << endl;
    cout << endl;

    // compound &
    cout << "Compound & : \n" << endl;
    var1 &= var2;
    var2 &= var1;
    cout << "var1 (bin) : " << bitset<8>(var1) << setw(30) << " var1 (dec) : " << var1 << endl;
    cout << "var2 (bin) : " << bitset<8>(var2) << setw(30) << " var2 (dec) : " << var2 << endl;
    cout << endl;

    // compound |
    cout << "Compound | : \n" << endl;
    var1 |= var2;
    var2 |= var1;
    cout << "var1 (bin) : " << bitset<8>(var1) << setw(30) << " var1 (dec) : " << var1 << endl;
    cout << "var2 (bin) : " << bitset<8>(var2) << setw(30) << " var2 (dec) : " << var2 << endl;
    cout << endl;

    // compound ^
    cout << "Compound ^ : \n" << endl;
    var1 ^= var2;
    var2 ^= var1;
    cout << "var1 (bin) : " << bitset<8>(var1) << setw(30) << " var1 (dec) : " << var1 << endl;
    cout << "var2 (bin) : " << bitset<8>(var2) << setw(30) << " var2 (dec) : " << var2 << endl;
    cout << endl;

    return 0;
}
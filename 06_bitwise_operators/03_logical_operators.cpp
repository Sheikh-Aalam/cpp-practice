#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

int main()
{
     int column_width{33};
     unsigned char var1{122}, var2{15};

     cout << endl;
     cout << "variable 1 is: " << bitset<8>(var1) << endl;
     cout << "variable 2 is: " << bitset<8>(var2) << endl;

     cout << endl;

     // and

     cout << "Bitwise AND : " << endl;
     cout << "var1 & var2 (bin): " << bitset<8>(var1 & var2)
          << setw(30) << "var1 & var2 (dec): " << (var1 & var2) << endl;

     cout << endl;
     
     // or

     cout << "Bitwise OR : " << endl;
     cout << "var1 | var2 (bin): " << bitset<8>(var1 | var2)
          << setw(30) << "var1 | var2 (dec): " << (var1 | var2) << endl;

     cout << endl;

     // not

     cout << "Bitwise NOT : " << endl;
     cout << "var1 is: " << bitset<8>(var1) << setw(column_width) << "~ var 1 is :" << bitset<8>(~var1) << endl;
     cout << "var2 is: " << bitset<8>(var2) << setw(column_width) << "~ var 2 is :" << bitset<8>(~var2) << endl;
     cout << endl;

     // xor

     cout << "Bitwise XOR : " << endl;
     cout << "var1 ^ var2 (bin): " << bitset<8>(var1 ^ var2)
          << setw(30) << "var1 ^ var2 (dec): " << (var1 ^ var2) << endl;

     return 0;
}
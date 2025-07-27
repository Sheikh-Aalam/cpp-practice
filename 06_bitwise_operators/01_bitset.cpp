#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned short int data{15};

    cout << "Data (dec) : " << showbase << dec << data << endl;
    cout << "Data (oct) : " << showbase << oct << data << endl;
    cout << "Data (hex) : " << showbase << hex << data << endl;
    cout << "Data (bin) : " << bitset<16>(data) << endl;

    return 0;
}
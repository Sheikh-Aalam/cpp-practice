#include <iostream>

using namespace std;

int main()
{
    double x{34.5}, y{12.9};

    int sum_1 = x + y;
    cout << "The value of sum_1 is : " << sum_1 << endl;

    // c++ casting

    int sum_2 = static_cast<int>(x) + static_cast<int>(y);
    cout << "The value of sum_2 is : " << sum_2 << endl;

    int sum_3 = static_cast<int>(x + y);
    cout << "The value of sum_3 is : " << sum_3 << endl;

    /* old C style cast - enabled for compatibility with old programms
    otherwise c++ casts like static_cast are recommended. */

    int sum_4 = (int)(x) + (int)(y);
    cout << "The value of sum_4 is : " << sum_4 << endl;

    int sum_5 = (int)(x + y);
    cout << "The value of sum_5 is : " << sum_5 << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    constexpr int a {565};  //executed at compile time and should be initialized at declaration
    constexpr float f {56.4};

    int i {7};

    cout<< "a is " << a << endl;
    cout << "f is " << f << endl;

    constexpr int b {3*a};
    cout << "b is " << b << endl;

    // constexpr int c {i};   - can't initialize constexpr with variable
    // a = 33;  - can't modify constexpr
    // static_assert(condition) checks condition at compile time 
    //static_assert (a==44);  gives compiler error as condition fails
    static_assert (a>44); //program runs when condition is true

    // it works for constant valued expressions
    return 0;
}
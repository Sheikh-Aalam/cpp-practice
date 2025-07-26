#include <iostream>

using namespace std;

constinit int a{234}; // constinit is also for compile time and it is not const, i.e. it can be modified

constinit int b{457};

// const constinit int c{2 * a}; gives error because a variable value used to initialize a const

const constinit int c{2}; // constinit and const can be combined

constinit double d {44.43}; // constinit can be double

int var{56}; // run time variable

// constinit int value{var};  run time variable used to initialize compile time expression


// constexpr constinit float f {44.50}; // can't combine constexpr and constinit

int main()
{
    //constinit int age {22}; constinit is not used inside main function

    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    cout << "c is " << c << endl;
    cout << "d is " << d << endl;

    a = 25; //constinit can be modified
    
    cout << "new a is " << a << endl;

    return 0;
}
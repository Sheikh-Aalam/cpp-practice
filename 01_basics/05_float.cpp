/* #include <iostream>

int main(){
float f= 55.54675457545877f;
double d = 55.54675457545877;
long double l = 55.54675457545877l;
std::cout << "f is " << f << " d is " << d << " l is " << l <<std::endl;
    return 0;
} */

#include <iostream>
#include <iomanip>
int main(){
float f= 55.5467545754587788686855885f;
double d = 55.5467545754587788686855885;
long double l = 55.5467545754587788686855885l;
std::cout << std::setprecision(30);
std::cout << "f is " << f << " d is " << d << " l is " << l <<std::endl;
    return 0;
}
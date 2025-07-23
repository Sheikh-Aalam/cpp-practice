#include <iostream>
using namespace std;
int main()
{
    double length, width, height;
    cout << "Welcome to box calculator. Please type in length, width and height information : " << endl;
    cout << "length : ";
    cin >> length;
    cout << "width : ";
    cin >> width;
    cout << "height : ";
    cin >> height;

    double base_area = width * length;
    cout << "The base area is : " << base_area << endl;

    double volume = base_area * height;
    cout << "The volume is : " << volume << endl;
    return 0;
}
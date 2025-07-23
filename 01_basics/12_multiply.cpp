#include<iostream>
int product( int a, int b);
int product(int a, int b){
    
    return a*b;
}
int main(){
int a=5, b=6;
std::cout << "Product: " << product(a,b) << std::endl;

    return 0;
}
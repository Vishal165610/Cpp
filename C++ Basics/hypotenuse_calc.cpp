#include <iostream>
#include <cmath>
int main() {
    double a;
    double b;
    double c;
    
    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    std::cout<<"Enter the value of b: ";
    std::cin>>b;
    
    c = a*a + b*b;
    std::cout<<"Hypotenuse c = "<< sqrt(c);
    return 0;
}

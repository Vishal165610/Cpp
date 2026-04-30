// greatest number among three numbers
 
#include <iostream>

int main(){
    double a;
    double b;
    double c;

    std::cout<<"Enter the value of a: ";
    std::cin>>a;
    
    std::cout<<"Enter the value of b: ";
    std::cin>>b;
    
    std::cout<<"Enter the value of c: ";
    std::cin>>c;
    
    if(a>b && a>c){
        std::cout<<"a is the greatest among all";
    }
    else if (b>c && b>a){
        std::cout<<"b is greatest among all";
    }
    else{
        std::cout<<"c is greatest among all";
    }
    
    return 0;
}

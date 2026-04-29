//console calculator program

#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;
    
    std::cout<<"Enter first number :";
    std::cin>>num1;
    
    std::cout<<"Enter second number :";
    std::cin>>num2;
    
    std::cout<<"Select any one of them (+,-,*,/) : ";
    std::cin>>op;
    
    switch(op){
        case '+':
            std::cout<<num1+num2;
            std::cin>>result;
            break;
            
        case '-':
            std::cout<<num1-num2;
            std::cin>>result;
            break;
            
        case '*':
            std::cout<<num1*num2;
            std::cin>>result;
            break;
            
        case '/':
            std::cout<<num1/num2;
            std::cin>>result;
            break;
        
        default:
            std::cout<<"Please only any one from these (+,-,*,/)";
            break;
    }
    
    return 0;
}


#include <iostream>

int main() {
    double temp;
    char unit;
    
    std::cout<<"****** TEMPERATURE CONVERTER ******\n";
    std::cout<<"F = Faherenheit\n";
    std::cout<<"C = Celcius\n";
    
    std::cout<<"Enter the temperature you want to convert to (F or C) :";
    std::cin>>unit;
    
    if( unit == 'F' || unit == 'f'){
        std::cout<<"Enter the temperature in Celcius: ";
        std::cin>>temp;
        temp = (1.8 * temp) + 32;
        std::cout<<"Temperature is "<<temp<<" Faherenheit\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout<<"Enter the temperature in Faherenheit: ";
        std::cin>>temp;
        temp = (temp - 32 )/1.8;
        std::cout<<"Temperature is "<<temp<<" Celcius\n";
    }
    else{
        std::cout<<"Please Enter the unit in F or C only";
    }
    return 0;

}

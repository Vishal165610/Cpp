// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    std::string name;
    int age;
    
    std::cout<<"What is your age? : ";
    std::cin>>age;
    // std::cin.ignore();
    std::cout<<"What is your full your name? : "; 
    std::getline(cin >>ws, name); 
    
    //used getline bcz we cant get the vlaue after space thats why we use getline it occurs in strings
    
    std::cout<<"Hello "<<name<<"\n";
    std::cout<<"You're "<<age<<" years old";
    

    return 0;
}

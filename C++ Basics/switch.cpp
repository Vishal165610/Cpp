//switch case
#include <iostream>

int main(){
    int month;
    std::cout<<"Enter the month (1-12): ";
    std::cin>>month;
    
    switch(month){
        case 1: 
        std::cout<<"It's January";
        break;
        
        case 2: 
        std::cout<<"It's febrauary";
        break;
        
        case 3: 
        std::cout<<"It's March";
        break;
        
        case 4: 
        std::cout<<"It's April";
        break;
        
        case 5: 
        std::cout<<"It's May";
        break;
        
        case 6: 
        std::cout<<"It's June";
        break;
        
        case 7: 
        std::cout<<"It's July";
        break;
        
        case 8: 
        std::cout<<"It's August";
        break;
        
        case 9: 
        std::cout<<"It's September";
        break;
        
        case 10: 
        std::cout<<"It's October";
        break;
        
        case 11: 
        std::cout<<"It's November";
        break;
        
        case 12: 
        std::cout<<"It's December";
        break;
        
        default:
        std::cout<<"Please only enter numbers between (1-12)";
        break;
    }
    return 0;
}

//Example - 2

#include <iostream>

int main(){
    char grade;
    std::cout<<"What is your grade (A-D) : ";
    std::cin>>grade;
    
    switch(grade){
        case 'A':
            std::cout<<"Well Performed";
            break;
            
        case 'B':
            std::cout<<"Nicely Performed";
            break;
            
        case 'C':
            std::cout<<"Improvement isn't optional";
            break;
            
        case 'D':
            std::cout<<"Failed!!";
            break;
            
        default:
            std::cout<<"Grades are only allowed in between (A-D)";
            break;
    }
    return 0;
}

#include <iostream>
#include <iomanip>

int main()
{
    //Temp Converter
    
    //Variables
    double temp;
    char type;
    double newtemp;
    
    //Ask user for decimal and char for C or F
    std::cout << "Enter temperature: \nExample: (72 F)\n";
    
    //Input as variables
    std::cin >> temp >> type;
    
    //If statement
    if (type == 'F'){
        newtemp = ((temp - 32)*5)/9;
        char othertype = 'C';
        std::cout << temp << " Degree(s) " << type << " is equal to " << newtemp << " degree(s) " << othertype << "\n";
    }
    else{
        //If type is C
        newtemp = ((temp * 9)/5) + 32;
        char othertype = 'F';
        std::cout << temp << " Degree(s) " << type << " is equal to " << newtemp << " degree(s) " << othertype << "\n";
    }
}
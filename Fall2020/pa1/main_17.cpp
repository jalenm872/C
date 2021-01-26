#include <iostream>

int main()
{
    //Grades
    
    //Variables
    char lettergrade;
    
    //Ask for user input
    //std::cout << "Enter letter grade: \n";
    
    //User input as variable
    std::cin >> lettergrade;
    
    //If statement
    if(lettergrade == 'A' || lettergrade == 'a'){
        std::cout << "Excellent\n";
    }
    else if(lettergrade == 'B' || lettergrade == 'b'){
        std::cout << "Good\n";
    }
    else if(lettergrade == 'C' || lettergrade == 'c'){
        std::cout << "Average\n";
    }
    else if(lettergrade == 'D' || lettergrade == 'd'){
        std::cout << "Poor\n";
    }
    else if(lettergrade == 'F' || lettergrade == 'f'){
        std::cout << "Failing\n";
    }
    else{
        std::cout << "Not a valid grade letter\n";
    }
    
    return 0;
}
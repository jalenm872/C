#include <iostream>

int main()
{
    //Date Converter
    
    //Variables
    int month;
    int day;
    int year;
    
    //Ask user for month (written), day, year
    //std::cout << "Enter number month, day, and year \nExample (1 1 2000) \n";
    
    //Input as variables
    std::cin >> month >> day >> year;
    
    //If statement for months
    if (month == 1){
        std::cout << "January " << day << ", " << year << "\n";
    }
    else if (month == 2){
        std::cout << "February " << day << ", " << year << "\n";
    }
    else if (month == 3){
        std::cout << "March " << day << ", " << year << "\n";
    }
    else if (month == 4){
        std::cout << "April " << day << ", " << year << "\n";
    }
    else if (month == 5){
        std::cout << "May " << day << ", " << year << "\n";
    }
    else if (month == 6){
        std::cout << "June " << day << ", " << year << "\n";
    }
    else if (month == 7){
        std::cout << "July " << day << ", " << year << "\n";
    }
    else if (month == 8){
        std::cout << "August " << day << ", " << year << "\n";
    }
    else if (month == 9){
        std::cout << "September " << day << ", " << year << "\n";
    }
    else if (month == 10){
        std::cout << "October " << day << ", " << year << "\n";
    }
    else if (month == 11){
        std::cout << "November " << day << ", " << year << "\n";
    }
    else if (month == 12){
        std::cout << "December " << day << ", " << year << "\n";
    }
    else{
        std::cout << "Imaginary Month \n";
    }
    return 0;
}
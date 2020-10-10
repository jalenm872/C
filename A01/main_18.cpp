#include <iostream>

int main()
{
    //Weekday

    //Variables
    int day;
    int month;
    int year;

    //Ask user for day, month, year (day month year)
    std::cout << "Enter day, month, and year \nExample: (27 2 2001)\n";

    //User input as variables
    std::cin >> day >> month >> year;

    //Math 
    //Century
    int century = year/100;
    //Yearpart
    int yearpart = year % 100;

    //Weekday
    int weekday = (day + (((month +1)*26)/10)+yearpart+(yearpart/4)+(century+4) + 5 * century);

    std::cout << weekday;

    if (weekday == 1){
        std::cout << "Saturday";
    }
    else if(weekday == 2){
        std::cout << "Sunday";
    }
    else if(weekday == 3){
        std::cout << "Monday";
    }
    else if(weekday == 4){
        std::cout << "Tuesday";
    }
    else if(weekday == 5){
        std::cout << "Wednesday";
    }
    else if(weekday == 6){
        std::cout << "Thursday";
    }
    else{
        std::cout << "Error";
    }
    return 0;
}

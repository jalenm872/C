#include <iostream>

int main()
{
    //Weekday

    //Variables
    int day;
    int month;
    int year;

    //Ask user for day, month, year (day month year)
    //std::cout << "Enter day, month, and year \nExample: (27 2 2001)\n";

    //User input as variables
    std::cin >> day >> month >> year;

    //Math 
    //Century
    int century = year/100;
    //Yearpart
    int yearpart = year % 100;

    //Month Exceptions
    //January and February are 13 and 14 and previous year
    if (month== 1){
        month = 13;
        year = year - 1;
    }
    else if (month == 2){
        month = 14;
        year = year - 1;
    }

    //Weekday
    int weekday = ((day + (((month +1)*26)/10)+yearpart+(yearpart/4)+(century/4) + 5 * century)%7);

    if (weekday == 0){
        std::cout << "Saturday \n";
    }
    else if(weekday == 1){
        std::cout << "Sunday \n";
    }
    else if(weekday == 2){
        std::cout << "Monday \n";
    }
    else if(weekday == 3){
        std::cout << "Tuesday \n";
    }
    else if(weekday == 4){
        std::cout << "Wednesday \n";
    }
    else if(weekday == 5){
        std::cout << "Thursday \n";
    }
    else if (weekday == 6){
        std::cout << "Friday \n";
    }
    else{
        std::cout << "Error";
    }
    return 0;
}

#include <iostream>

int main()
{
    //Privelage
    
    //Variables
    int age;
    
    //User input as age
    std::cin >> age;
    
    if (age < 16){
        std::cout << "Too young\n";
    }
    else if (age >= 16 && age < 18){
        std::cout << "Can drive\n";
    }
    else if  (age >= 18 && age < 21){
        std::cout << "Can join the military\n";
    }
    else if (age >= 21){
        std::cout << "Can have a beer\n";
    }
    return 0;
}
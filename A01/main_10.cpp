#include <iostream>

int main()
{
    //Word For Number
    
    //Variables
    int num;
    
    //Ask user for number (Capital first letter)
    std::cout << "Enter number 0-9 \n";
    
    //Set input as variable
    std::cin >> num;
    
    //If Statement
    if (num == 0){
        std::cout << "Zero";
    }
    else if (num == 1){
        std::cout << "One";
    }
    else if (num == 2){
        std::cout << "Two";
    }
    else if (num == 3){
        std::cout << "Three";
    }
    else if (num == 4){
        std::cout << "Four";
    }
    else if (num == 5){
        std::cout << "Five";
    }
    else if (num == 6){
        std::cout << "Six";
    }
    else if (num == 7){
        std::cout << "Seven";
    }
    else if (num == 8){
        std::cout << "Eight";
    }
    else if (num == 9){
        std::cout << "Nine";
    }
    else{
        std::cout << "Not a valid number. \n";
    }
    return 0;
}
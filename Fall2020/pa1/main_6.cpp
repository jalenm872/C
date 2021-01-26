#include <iostream>

int main()
{
    //Positive/Negative/Neither?
    int a_variable; //User Input

    std::cin >> a_variable;
    
    if(a_variable > 0){
        std::cout << a_variable << " is positive\n";
    }
    else if (a_variable < 0){
        std::cout << a_variable << " is negative\n";
    }
    else{
        std::cout << a_variable << " is neither positive nor negative\n";
    }
    return 0;
}
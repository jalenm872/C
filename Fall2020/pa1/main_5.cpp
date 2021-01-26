#include <iostream>

int main()
{
    //Odd Or Even Function
    
    //Impliment variables
    int a_variable; //User Interger
    int b_variable; //Output for odd or even

    //Set user input as a_variable
    std::cin >> a_variable;

    //Math
    b_variable = (a_variable % 2 );

    //If Odd or Even
    if (b_variable == 0){
        std::cout << a_variable << " is even\n";
    }
    else{
        std::cout << a_variable << " is odd\n";
    }
    return 0;
}
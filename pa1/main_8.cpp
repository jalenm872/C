#include <iostream>

int main()
{
    //Last Digit is Nine
    
    //Variables
    int a_variable;
    int b_variable;
    
    //Input as variable
    std::cin >> a_variable;
    
    //Check if 9 at the end
    b_variable = a_variable % 10;
    
    //If Statement and output result
    if (b_variable == 9 || b_variable == -9){
        std::cout << a_variable << " is good\n";
    }
    else{
        std::cout << a_variable << " is no good\n";
    }
}
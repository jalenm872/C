#include <iostream>

int main()
{
    //Larger than 100 and multiple of 8
    
    //User interger variable
    int a_variable;
    int b_variable;
    
    //Set user interger as variable
    std::cin >> a_variable;
    
    //Math
    b_variable = a_variable % 8;
    
    if (a_variable > 100 && b_variable == 0){
        std::cout << a_variable << " satisfies the criteria. \n";
    }
    else{
        std::cout << a_variable << " does not satisfy the criteria. \n";
    }
}
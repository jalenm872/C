#include <iostream>

int main()
{
    //Program to ask user for a_variable, b_variable, and an operator to perform a math equation
    
    //Setting up variables
    int a_variable;
    int b_variable;
    int c_variable;
    char operator_variable;
    
    //Ask user for a_variable, b_variable, and operator
    std::cout << "Enter two intergers: \n";
    
    //Set user inputs to a_varibale and b_variable
    std::cin >> a_variable >> b_variable;
    
    //Ask user for operator
    std::cout << "Enter an operator: \n";
    
    //Set user input to c_variable
    std::cin >> c_variable;
    
    //Math Work and output 
    if (operator_variable == +){
        c_variable = a_variable + b_variable;
        std::cout << a_variable << " + " << b_variable << " = " << c_variable << "\n";
    }
    else if (operator_variable = '-' ){
        c_variable = a_variable - b_variable;
        std::cout << a_variable << " - " << b_variable << " = " << c_variable << "\n";
    }
    else {
        c_variable = a_variable / b_variable;
        std::cout << a_variable << " / " << b_variable << " = " << c_variable << "\n";
    }
}
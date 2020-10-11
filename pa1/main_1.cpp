#include <iostream>

int main()
{
    //Impliment an algorithm for addition. Ask user for two inputs then output the math expression.

    int a_variable;
    int b_variable;
    int c_variable;

    //Set user input as a_variable and b_variable

    std::cin >> a_variable >> b_variable;

    //Addition
    c_variable = a_variable + b_variable;

    //Output of addition
    std::cout << a_variable << " + " << b_variable << " = " << c_variable << "\n";

    return 0;

}
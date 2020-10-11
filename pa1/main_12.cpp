#include <iostream>
#include <iomanip>

int main()
{
    //Average
    
    //Variables
    double num_1;
    double num_2;
    double num_3;
    double average;
    
    //Ask user for three decimals
    //std::cout << "Enter three decimals values for an average: \n";
    
    //Input as variables
    std::cin >> num_1 >> num_2 >> num_3;
    
    //Math for average
    average = (num_1 + num_2 + num_3)/3;
    
    //Output
    std::cout << "The average of " << std::fixed << std::setprecision(7) << num_1 << ", " << num_2 << ", and " << num_3 << " is " << average << "\n";
    
    return 0;
}
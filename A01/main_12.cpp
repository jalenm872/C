#include <iostream>

int main()
{
    //Average
    
    //Variables
    float num_1;
    float num_2;
    float num_3;
    float average;
    
    //Ask user for three decimals
    std::cout << "Enter three decimals values for an average: \n";
    
    //Input as variables
    std::cin >> num_1 >> num_2 >> num_3;
    
    //Math for average
    average = (num_1 + num_2 + num_3)/3;
    
    //Output
    std::cout << "The average of " << num_1 << ", " << num_2 << ", " << num_3 << " is " << average;
    
    return 0;
}
#include <iostream>

int main(){
    //Smallest Number
    
    //Variables
    int num_1;
    int num_2;
    int num_3;
    
    //Ask user for three intergers
    std::cout << "Enter three intergers: \n";
    
    //User input as variables'
    std::cin >> num_1 >> num_2 >> num_3;
    
    //Comparisons
    if (num_1 <= num_2 && num_1 <= num_3){
        std::cout << "The smallest number is " << num_1 << "\n";
    }
    else if (num_2 <= num_1 && num_2 <= num_3){
        std::cout << "The smallest number is " << num_2 << "\n";
    }
    else{
        std::cout << "The smallest number is " << num_3 << "\n";
    }
    
    //Out statment
    
    return 0;
}
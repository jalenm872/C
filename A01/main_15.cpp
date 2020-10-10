#include <iostream>

int main(){
    //Is it cold out?
    
    //Variables
    float ctemp;
    float ftemp;
    
    //Ask user for temp in C
    std::cout << "Enter Celsius Temperature: \n";
    
    //User input as temp1
    std::cin >> ctemp;
    
    //Math conversion(C to F)
    ftemp = ((ctemp * 9)/5) + 32;
    
    //Comparisons
    if (ftemp <= 32){
        std::cout << "It is cold out \n";
    }
    else if(ftemp > 32 && ftemp <= 65){
        std::cout << "Wear a jacket \n";
    }
    else if(ftemp > 65){
        std::cout << "It is nice out \n";
    }
    
    return 0;
}
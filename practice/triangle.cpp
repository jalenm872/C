#include <iostream>

int traiangle(a, b, c){
    if (a + b + c != 180)
        std::cout << "Impossible \n";
    else{
        if (a = 90 || b = 90 || c = 90){
            std::cout << "Right \n";
        }
        else if (a > 90 || b > 90 || c > 90){
            std::cout << "Obtuse \n";
        }
        else if (a < 90 || b < 90 || c < 90){
            std::cout << "Acute \n";
        }
    }
}
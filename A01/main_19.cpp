#include <iostream>

int main()
{
    //Traingles

    //Variables
    int angle;

    //Ask user for input for degree
    std::cout << "Enter degree value: \n";

    //Push input to variable
    std::cin  >> angle;

    //Comparison
    if (angle < 90){
        std::cout << "Acute \n";
    }
    else if (angle == 90){
        std::cout << "Right \n";
    }
    else if(angle > 90 && angle <= 180){
        std::cout << "Obstuse \n";
    }
    else{
        std::cout << "This triangle is impossible \n";
    }

    return 0;
}
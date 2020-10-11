#include <iostream>

int main()
{
    //Traingles

    //Variables
    int angle1;
    int angle2;
    int angle3;

    //Ask user for input for degree
    //std::cout << "Enter three interior angles: \n";

    //Push input to variable
    std::cin  >> angle1 >> angle2 >> angle3;

    //Total
    int total = angle1 + angle2 + angle3;

    //Comparison
    if (total == 180){
        if (angle1 < 90 && angle2 < 90 && angle3 < 90){
            std::cout << "Acute \n";
        }
        else if(angle1 == 90 || angle2 == 90 || angle3 == 90){
            std::cout << "Right \n";
        }
        else if(angle1 > 90 || angle2 > 90 || angle3 > 90){
            std::cout << "Obtuse \n";
        }
    }
    else{
        std::cout << "This triangle is impossible \n";
    }

    return 0;
}
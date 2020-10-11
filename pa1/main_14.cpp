#include <iostream>

int main()
{
    //Which Quadrant
    
    //Variables
    double cord1;
    double cord2;
    
    //Ask user for cords
    std::cout << "Enter x-y coordinates for quadrant: \nExample: 1 2 \n";
    
    //Inputs as variables
    std::cin >> cord1 >> cord2;
    
    //If statement
    if(cord1 > 0 && cord2 > 0){
        //Quad 1
        std::cout << "Quadrant 1 \n";
    }
    else if(cord1 < 0 && cord2 >0){
        //Quad 2
        std::cout << "Quadrant 2 \n";
    }
    else if(cord1 < 0 && cord2 < 0){
        //Quad 3
        std::cout << "Quadrant 3 \n";
    }
    else if(cord1 > 0 && cord2 < 0){
        //Quad 4
        std::cout << "Quadrant 4 \n";
    }
    else{
        //Error
        std::cout << "No Quadrant \n";
    }
    
    return 0;
}
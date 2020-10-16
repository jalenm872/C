#include <iostream>
//Draw left-justified traingel 0<rows<20

//Function
int triangle(){
    //Variable
    int row, i , j;
    //User input
    std::cout << "Enter Rows\n";
    std::cin >> row;
    //If and nested for loops
    for(i; i <= row; i++){
        for(j; j <= i; j++){
            std::cout << "+ ";
        }
        std::cout << "\n";
    }
    return 0;
}
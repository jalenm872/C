#include <iostream>
//Draw right-justified traingel 0<rows<20

//Function
int main(){
    //Variable
    int row;
    //User input
    std::cin >> row;
    //If and nested for loops
    if(row > 0 && row < 20){
        //Rows
        for(int i = 1; i <= row; i++){
            //Spaces in Each Column
            for(int s = row - i; s > 0; s--){
                std::cout << "  ";
            }
            //Columns with Star
            for(int j = 1; j <= i; j++){
                std::cout << "* ";
            }
        //End Each Row
        std::cout << std::endl;
    }
    return 0;
    }
    //Invalid Input
    else{
        std::cout << "Error\n";
    }
}
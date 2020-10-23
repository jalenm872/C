#include <iostream>
//Draw left-justified traingel 0<rows<20

//Function
int main(){
    //Variable
    int row;
    //User input
    std::cin >> row;
    //If and nested for loops
    if(row > 0 && row < 20){
        for(int i = 1; i <= row; i++){
            for(int j = 1; j <= i; j++){
                std::cout << "+ ";
        }
        std::cout << std::endl;
    }
    return 0;
    }
    else{
        std::cout << "Error\n";
    }
}
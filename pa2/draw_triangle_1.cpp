//Draw left-justified traingel 0<rows<20
#include <iostream>

//Function
int main(){
    //Variable
    int row;
    //User input
    std::cin >> row;
    //If and nested for loops
    for (int i; i <= row; ++i){
        for(int j; j <= i; ++j){
            std::cout << "+ ";
        }
        std::cout << "\n";
    }
    return 0;
}
//Draw left-justified traingel 0<rows<20
#include <iostream>

//Function
int main(){
    //Variable
    int rows;
    //User input
    std::cin >> rows;
    //If and nested for loops
    int i = 0;
    for (i; i <= rows; i++){
        int j = 0;
        for(j; j <= i; j++){
            std::cout << "+ ";
        }
        std::cout << "LOL";
    }
    return 0;
}
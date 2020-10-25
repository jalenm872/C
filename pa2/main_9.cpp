#include <iostream>

//Draw Triangle 3

int main(){
    //Variables
    int a,b,c;
    //User Input
    std::cin >> a >> b >> c;
    //If statment for prerequisites
    if ( a > 0 && b > 0 && c > 0 && a <= 20 && b <= 20 && c <= 20 && a <= b ){
        std::cout << "Here\n";
        //Rows Variable
        int rows = b-a;
        //Rowss
        for(int i = 1; i <= rows; i++){
            for(int j = a; j <= b; j++){
                std::cout << "+ ";
            }
            std::cout << std::endl;
        }
        
    }
}



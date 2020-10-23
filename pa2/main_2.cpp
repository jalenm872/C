#include <iostream>

//Right Justified Triangle

int main(){
    int row;
    std::cin >> row;
    if(row < 20 || row > 0){
        for(int i = 0; i <= row; i++){
            for(int j = 0; j <= i; j++){
                std::cout << "*";
            }
            std::cout << "/n";
        }
    }
    else{
        std::cout << "Error\n";
    }
    return 0;
}
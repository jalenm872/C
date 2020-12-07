#include <iostream>
#include <string>

int main(){
    int row;
    int column;
    int gen;
    //Grid input
    std::cin >> row; 
    std::cin >> column;
    std::cin >> gen;
    
    //Array
    std::string board[row][column];
    //Board input
    std::string value;
    std::getline(std::cin, value);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            board[i][j] = value;
        }
    }

    std::cout << std::endl;
    /*
    std::cout << row << std::endl;
    std::cout << column << std::endl;
    std::cout << gen << std::endl;
    */
    return 0;
}
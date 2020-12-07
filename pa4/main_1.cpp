#include <iostream>
#include <string>

//Soduku Checker
// Check each line if it contains 1-9. If repeated num or if not then it does not evaluate to completed.
//Sudoku board is 9 by 9 so 81


//Check if whole board is filled out
bool checker(std::string str){
    return false;
}

//check if each row is 1-9
bool rows(int arr[9][9]){
    //For each row
    for (int i = 0; i < 9; i++){
        int temp = 0;
        for(int j = 0; j < 9; j++){
            temp = temp + arr[i][j];
        }
        if (temp != 45){
            return false;
        }
        //if array[0]-array[8] dont repeat return true
    }
    return true;
}


//check if each column is 1-9
bool columns(int arr[9][9]){
    //For each column
    for (int j = 0; j < 9; j++){
        int temp = 0;
        for(int i = 0; i < 9; i++){
            temp = temp + arr[i][j];
        }
        if (temp != 45){
            return false;
        }
        //if array[0]-array[8] dont repeat return true
    }
    return true;
}

//check if each 3 by 3 is 1 -9
bool boxes(int arr[9][9]){
    int temp = 0;
    int startrow = 0;
    int endrow = 3;
    int startcolumn = 0;
    int endcolumn = 3;
    //Set
    for(int k = 0; k < 9; k++){
        temp = 0;
        //Rows
        for(int i = startrow; i < endrow; i++){
            //Column
            for(int j = startcolumn; j < endcolumn; j++){
                temp = temp + arr[i][j];
            }
        }
        if(temp != 45){
            return false;
        }
        startrow = startrow + 3;
        endrow = endrow + 3;
        if (k == 2 || k == 5){
            startcolumn = endcolumn; // 0-
            endcolumn = endcolumn + 3;
            //std::cout << startcolumn << std::endl;
            startrow = 0;
            endrow = 3;
        }
        //std::cout << temp << std::endl;
    }

    return true;
}
//Take user input
int main(){
    int value;
    int board[9][9];
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            std::cin >> board[i][j];
        }
    }
    
    if(rows(board) == false || columns(board) == false || boxes(board) == false){
        std::cout << "Wrong solution!" << std::endl;
    }
    else{
        std::cout << "Solution is good!" << std::endl;
    }

    /*
    std::cout << std::endl;
    //Checks board
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
    */
    return 0;
}
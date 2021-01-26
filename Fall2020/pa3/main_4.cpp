#include <iostream>

//Sorted

//Read a sequence of intergers
//Print if sorted(small to big) or not sorted

int main(){

    //Variables
    int value, temp;
    bool sorted = true;
    //While Loop for inputs
    std::cin >> temp;
    while (std::cin >> value){
        if(value > temp){
            sorted = false;
        }
        temp = value;
    }

    if(sorted == true){
        std::cout << "Sorted" << std::endl;
    }
    else{
        std::cout << "Not Sorted" << std::endl;
    }
    return 0;
}
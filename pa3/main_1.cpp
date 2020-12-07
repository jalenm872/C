#include <iostream>

//Read an array (Length 0-100) and find how many 
//times the first interger repeats in the array

int main(){
    //Variables
    int value, temp;
    int count = 1;
    std::cin >> temp;
    //Ask user for input
    while(std::cin >> value){
        if(value == temp){
            count ++;
        }
        
    }
    std::cout << count << std::endl;
    return 0;
}
#include <iostream>

//Sum of Even Digits Function

int main(){

    //Variables
    int num;
    int sum = 0;
    //User Input
    std::cin >> num;
    //While loop for number and checks if each digit is even
    while(num != 0){
        int digit = num % 10;
        num /= 10;

        //If digit is even, adds to sum
        if((digit % 2) == 0){
            sum = sum + digit;
        } 
    }
    std::cout << sum << std::endl;
    return 0;
}
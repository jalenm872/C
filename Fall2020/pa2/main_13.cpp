#include <iostream>
#include <cmath>

//Armstong Number
int main(){
    //Variables
    int num, remainder, powernum;
    int sum = 0;
    int numDigits = 0;

    //User Input
    std::cin >> num;
    
    //Finds number of digits
    while(num != 0){
        num /= 10;
        numDigits++;
    }


    //std::cout << power;

    //Each digit to the number of digits power
    for(int i = num; i > 0; i /=10){
        //Have to round to an interger
        powernum = pow(remainder, numDigits);
        sum = sum + powernum;
        num /= 10;
    }

    std::cout << sum;

    //If statements for checking if true or false
    if(sum == num){
        std::cout << "True\n";
    }
    else{
        std::cout << "False\n";
    }
    return 0;
}
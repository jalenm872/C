#include <iostream>
#include <math.h>

//Armstong Number
int main(){
    //Variables
    int num;
    bool armstrong;
    int numDigits;

    //User Input
    std::cin >> num;
    
    //Function Calls
    numDigits = countDigits(num);
    armstrong = armstrongFunction(num);

    //If statements for checking if true or false
    if(armstrong == true){
        std::cout << "True\n";
    }
    else if (armstrong == false){
        std::cout << "False\n";
    }
    return 0;
}

int countDigits(int num){
    int count = 0;
    while(num != 0){
        num = num / 10;
        ++count;
    }
    return count;
}

//Function to check if an armstrong, needs a interger as parameter.
bool armstrongFunction(int num){
    //Temp variable for the number
    int temp;
    //Sum interger for adding up all digits
    int sum = 0;
    //Variable for each digit
    int digit;
    //Bool to identify true or false
    bool armstrongValue;

    temp = num;

    for(int i = 0; i < num; i++){
        digit = temp % 10;
        sum = sum + pow(digit, numDigits);
    }
    if (sum == num){
        armstrongValue = true;
    }
    else{
        armstrongValue = false;
    }
}
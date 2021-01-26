#include <iostream>

//Prime? 0-1,000,000,000

int main(){

    //Variable
    int n;
    //User input
    std::cin >> n;
    //Bool statement for prime is true or false
    bool prime = true;
    //Divide the input by 2

    //If statement
    if(n > 1 && n <= 1000000000){
        for(int i = 2; i < n; i++){
            //If is divisible by 2 to num then it is not prime
            if (n % i == 0){
                prime = false;
                break;
            }
        }
    }
    else if (n == 1 || n == 0){
        prime = false;
    }

    //Print statment for each bool outcome
    if (prime == true){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    return 0;
}
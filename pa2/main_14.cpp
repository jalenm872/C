#include <iostream>
//Perfect Number

int main(){
    int num;
    std::cin >> num;
    int sum = 0;
    //Loop through each divisor
    if(num > 0 && num <= 100000){
        for (int i = 1; i <= num - 1; i++){
            if((num%i) == 0){
                sum = sum + i;
            }
        }
        //If sum is equal to number   
        if(sum == num){
        std::cout << "True\n";
        }
        else{
            std::cout << sum << std::endl;
            std::cout << "False\n";
        }
    }
    
}
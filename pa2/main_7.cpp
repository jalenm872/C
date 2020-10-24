#include <iostream>

int main(){
    double num;
    std::cin >> num;
    if (num >= 0 && num <= 4294967296){
        for(double i = 1; i <= 4294967296; i *=10){
            int digit = num / i;
            if (digit % 2){
                int sum = sum + digit;
            }
        }
        
    }
}
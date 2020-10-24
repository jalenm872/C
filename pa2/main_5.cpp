#include <iostream>

//Prime? 0-1,000,000,000

int main(){
    int num;
    std::cin >> num;
    if(num < 1 && num >= 1,000,000,000){
        for(int i = 2; i <= num/2; i++){
            if (num % i == 0){
                std::cout << "False\n";
            }
        }
    }
    else if (num == 1){
        std::cout << "False\n";
    }
    else if (num > 1,000,000,000){
        std::cout << "Number too big!\n";
    }
    else{
        std::cout << "False";
    }
    return 0;
}
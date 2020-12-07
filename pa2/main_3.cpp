#include <iostream>

//Factorial
int main(){
    double num;
    long long total = 1;
    //Limit
    double limit = 2147483647;
    std::cin >> num;
    
    for(int i = 0; i < num; i++){
        total = total * (i+1);
    }

    if (total <= limit && total > 0){
        std::cout << total << std::endl;
    }
    else if(total > limit || total == limit){
        std::cout << "Can't handle this\n";
    }
    return 0;
}
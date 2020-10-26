#include <iostream>

//Factorial
int main(){
    int num;
    int total = 1;
    //Limit
    double limit = 2147483647;
    std::cin >> num;

    for(int i = 1; i < num; i++){
        total = total * (i+1);
    }

    if (total <= limit && total > 0){
        std::cout << total << std::endl;
    }
    else{
        std::cout << "Can't handle this\n";
    }
    return 0;
}
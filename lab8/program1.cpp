#include <iostream>

int fib(int num){
    std::cin >> num;
    if (num == 0 || num == 1){
        if (num == 1){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return fib(num - 1) + fib(num - 2);
    }
}
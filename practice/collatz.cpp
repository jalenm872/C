#include <iostream>

int n = 10
float collatz(n){
    int steps = 0;
    while (n != 1){
        if ( n % 2 == 0){
            n = n /2;
        }
        else{
            n = n*3 +1;
        }
        return steps ++;
    }
    std::cout << steps;
}
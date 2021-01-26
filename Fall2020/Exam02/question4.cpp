#include <iostream>
#include <cmath>

int foo(int n){
    if(n < 2){
        return 1;
    }
    int b = 1/(pow(2,n));
    return b + foo(n - 1); 
}

int main(){
    int num;
    std::cin >> num;
    foo(num);
}
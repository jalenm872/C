#include <iostream>

void print_seq(int a, int b){
    //Base case
    if (b < a){
        return;
    }
    std::cout << b << " ";
}

int main(){
    int low, high;
    print_seq(low,high);
    return 0;
}
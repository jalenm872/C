#include <iostream>

//Suffix Sum

int main(){
    double n;
    double s;
    int sum = 0;
    std::cin >> n >> s;
    if(n >= 1 && n <= 10000){
        if(s >= 1 && s <= n){
            for(int i = n; i > n-s; i--){
                sum = sum + i;
            }
            std::cout << sum << "\n";
        }
        
    }
    return 0;
}
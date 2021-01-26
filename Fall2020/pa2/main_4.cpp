#include <iostream>

//Power Program

int main(){
    double n;
    double k;
    std::cin >> n >> k;
    long long total = n;
    if(k == 0){
        std::cout << "0\n";
    }
    else if (k > 0 || k < 0){
        for(int i = 0; i < k - 1; i++){
            total *= n;
        }
        std::cout << total << "\n";
    }
    return 0;
}
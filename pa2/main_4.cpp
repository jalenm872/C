#include <iostream>

//Power Program

int main(){
    int n;
    int k;
    std::cin >> n >> k;
    int total = n;
    if(k == 0){
        std::cout << "0\n";
    }
    else if (k > 0){
        for(int i = 1; i <= k-1; i++){
            total *= n;
        }
        std::cout << total << "\n";
    }
    else if (k < 0){
        for (int i = 1; i <= abs(k)-1; i++){
            total *= n;
        }
        float answer = (1.0/total);
        std::cout << answer << "\n";
    }
    return 0;
}
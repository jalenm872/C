#include <iostream>

int main(){
    int num;
    double limit = 2,147,483,647;
    std::cin >> num;

    for(int i = 1; i <= num; i++){
        num = num * i;
    }
    if (num >= limit){
        std::cout << "Can't handle this\n";
    }
    return 0;
}
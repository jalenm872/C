#include <iostream>

int main(){
    int num;
    std::cin >> num;

    for(int i = 1; i <= num; i++){
        num = num * i;
    }
    if (num < 2,147,483,647){
        std::cout << "Can't handle this\n";
    }
    return 0;
}
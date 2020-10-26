#include <iostream>

//Draw Triangle 3

int main(){
    //Variables
    int a,b,c;
    //User Input
    std::cin >> a >> b >> c;
    //If statment for prerequisites
    if ( a > 0 && b > 0 && c > 0 && a <= 20 && b <= 20 && c <= 20 && a <= b ){
        //Rowss
        for(int i = 0; i <= a-1; i++){
            for(int j = 0; j <= i + (b-a); j += c){
                std::cout << "+ ";
            }
            std::cout << std::endl;
        }
        for(int i = 1; i <= a; i++){
            for(int j = b; j >= i; j -= c){
                std::cout << "+ ";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}



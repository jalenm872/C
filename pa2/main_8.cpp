#include <iostream>

//X of Stars

int main(){
    int num;
    //Number of rows
    std::cin >> num;
    if(num < 10 && num > 0){
        for(int i=1; i <= num; i++){
            for (int j = 1; j <= num; j++){
                if(j == i || j == ((i+num)-1) || j == (i-num)+1){
                    std::cout << "*";
                }
                else{
                    std::cout << " ";
                }
            }
            std::cout << "\n";
        }
    }
    return 0;
}
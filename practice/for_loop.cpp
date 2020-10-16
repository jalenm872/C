#include <iostream>


int i, j, c = 0, n =6;
int main(){
    for(i = 0; i <= 6; i +=3){
        for(j = i; j < n ; j++){
            c += j;
        }
    }
    std::cout << j;
    return 0;
}

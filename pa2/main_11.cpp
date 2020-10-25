#include <iostream>

//Character Pyramid
int main(){
    char end, start = 'A';
    std::cin >> end;
    int space = 1;
    for(int i = 1; i <= end; i++){
        for(int c = 1; c <= end; c++){
            std::cout << "  "
        }

        for(int j = 1; j <= i; j++){
            std::cout << end << " ";
        }
        end++;

        std::cout << "\n";
    }

}
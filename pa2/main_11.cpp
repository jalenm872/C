#include <iostream>

//Character Pyramid
int main(){
    char end;
    char start = 'A';
    int count, count1 = 0;
    int k = 0;
    std::cin >> end;
    int rows = (-(start-end));
    std::cout << rows;

    for(int i = 1; i <= (end-'A'+1); i++){
        for(int space = 1; space <= end-i; space++){
            std::cout << "  ";
            count++;
        }
        while(k != 2*i-1){
            if(count <= end-1){
                std::cout << i+k << " ";
                count++;
            }
            else{
                count1++;
                std::cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;

        std::cout << std::endl;
    }


    return 0;
}
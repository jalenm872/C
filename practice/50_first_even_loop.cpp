//Print the first 50 even numbers using a loop

#include <iostream>

int main()
{
    int sum = 0;
    for(int i = 0; i <= 50 ; i++){
        if( i % 2 == 0){
            sum += i;
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
This program takes no argument. 
It should prompt the user to enter integer values and enter END 
when they want to end the input and compute the average.
*/

int main(){
    //Get Input
    char inputNumber[30];
    printf("Enter integer values, then END to end recording:\n");
    float total = 0;
    int count = 0;
    float number;
    int min;
    int max;

    while(scanf("%s", inputNumber)){
        if(strcmp(inputNumber, "END") == 0){
            //printf("Hi\n");
            break;
        }
        //Count Increment
        count++;

        number = atoi(inputNumber);
        if(number < min){
            min = number;
        }
        if (number > max){
            max = number;
        }
        total = total + number;
    }
    float average = total/count;
    printf("Average is: %.1f\n", average);
    printf("The min value entered is: %d\n", min);
    printf("The max value entered is: %d\n", max);
    return 0;
}
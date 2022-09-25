#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Function to get average
void getAverage(int num, int total){
    double doubleTotal = (double)total;
    double doubleNum = (double)num;
    double average = doubleTotal/doubleNum;
    printf("Average is: %.1f", average);
    return;
}

void findMin(int num, int list[]){
    int min = list[0];
    for(int i = 0; i < num - 1; i++){
        if(list[i+1] < min){
            min = list[i+1];
        }
    }
    printf("The min value entered is: %d", min);
    return;
}

void findMax(int num, int list[]){
    int max = list[0];
    for(int i = 0; i < num - 1; i++){
        if(list[i+1] > max){
            max = list[i+1];
        }
    }
    printf("The max value entered is: %d", max);
    return;
}

int main(int argc, char *argv[]){
    if( argc == 2 ) {
        for(int j = 0; j < strlen(argv[1]); j++){
            if(isdigit(argv[1][j]) == 0){
                printf("usage: ./prog01_01 <positive integer>\n");
                return 0;
            }
        }
        int intCount = atoi(argv[1]);
        if (intCount <= 0){
      	   printf("usage: ./prog01_01 <positive integer>\n");
      	   return 0;
        }
        double total = 0;
        int list[intCount];
        printf("Enter %d integers: ", intCount);
        for(int i = 0; i <  intCount; i++){
            scanf("%d", &list[i]);
            total += list[i];
        }
        printf("You entered %d values", intCount);
        getAverage(intCount, total);
        findMin(intCount, list);
        findMax(intCount, list);
    }
    else if( argc > 2 ) {
        printf("usage: ./prog01_01 <positive integer>\n");
    }
    return 0;
}
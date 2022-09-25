#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Input
{
    /* data */
    int longitude;
    int latitude;
    char location;
};


int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("Need argument!\n");
        return 0;
    }
    else{
        printf("Hello");
    }
    return 0;
}
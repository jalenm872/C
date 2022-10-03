#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Structure for input
struct Input
{
    //Data
    char* longitude[100];
    char* latitude[100];
    char* location[100];
};

struct Input2{

};

int main(int argc, char *argv[])
{
    //If there is no data for names
    if(argc < 2){
        printf("Need argument!");
        return 0;
    }
    else{
        //Initialize structure
        struct Input inputList[argc];
        
        //Store Longitude Inputs
        int longCount = 0;
        for(int i = 1; i <= argc - 1; i += 3){
            inputList->longitude[longCount] = argv[i];
            longCount++;
        }

        //Store Latitude Inputs
        int latCount = 0;
        for(int i = 2; i <= argc - 1; i += 3){
            inputList->latitude[latCount] = argv[i];
            latCount++;
        }

        //Store Name inputs
        int nameCount = 0;
        for(int i = 3; i <= argc - 1; i += 3){
            inputList->location[nameCount] = argv[i];
            nameCount++;
        }

        //Second attempt
        int queryNumber;
        char queryName;
        int queryContinue = 1;

        while (queryContinue){
                char queryInput[200];
                //printf("Say something: ");
                scanf("%[^\n]", queryInput);
                getc(stdin);
                printf("queryInput: -->|%s|<--\n", queryInput);
                // Query: "END"
                if(strcmp(queryInput, "END") == 0){
                    queryContinue = 0;
                }
                if(strcmp(queryInput, "LIST") == 0){

                    for(int i = 0; i <= nameCount - 1; i++){
                        printf("Image %03d. Location: %4s, %4s. Name: %4s\n", i, inputList->longitude[i], inputList->latitude[i], inputList->location[i]);
                    }
                }
                if(strcmp(queryInput, "-x") == 0){
                    scanf("%d", &queryNumber);
                    for(int i = 0; i <= nameCount - 1; i++){
                        if(atoi(inputList->longitude[i]) == queryNumber){
                        //Example: "Image 000. Location: -23, 135. Name: Kingston
                        printf("Image %03d. Location: %4s, %4s. Name: %4s\n", i, inputList->longitude[i], inputList->latitude[i], inputList->location[i]);
                        }
                    }
                }

        }
    }


    return 0;
}
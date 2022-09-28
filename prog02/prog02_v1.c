#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Input
{
    //Data
    char* longitude[100];
    char* latitude[100];
    char* location[100];
};

int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("Need argument!\n");
        return 0;
    }
    else{
        //Initialize structure
        struct Input inputList[argc];

        size_t inputLength = 0;
        
        int longCount = 0;
        //Store Longitude Inputs
        for(int i = 1; i <= argc - 1; i += 3){
            //inputLength = inputLength + strlen(argv[i]);
            inputList->longitude[longCount] = argv[i];
            //printf("Input: %s\n", argv[i]);
            longCount++;
        }

        int latCount = 0;
        //Store Latitude Inputs
        for(int i = 2; i <= argc - 1; i += 3){
            inputList->latitude[latCount] = argv[i];
            //printf("Input: %s\n", argv[i]);
            latCount++;
        }

        int nameCount = 0;
        //Store name inputs
        for(int i = 3; i <= argc - 1; i += 3){
            inputList->location[nameCount] = argv[i];
            //printf("Input: %s\n", argv[i]);
            nameCount++;

        }

        char queryInput;
        int queryNumber;
        char queryName;

        //Query Example "Query: LIST"
        while(printf("Query: "), scanf("%s", &queryInput)){
            if(strcmp(&queryInput, "END") == 0){
                return 0;
            }
            else if(strcmp(&queryInput, "LIST") == 0){
                for(int i = 0; i <= nameCount - 1; i++){
                    printf("Image %03d. Location: %4s, %4s. Name: %4s\n", i, inputList->longitude[i], inputList->latitude[i], inputList->location[i]);
                }
            }
            // Query: "-x <number>"
            else if(strcmp(&queryInput, "-x") == 0){
                scanf("%d", &queryNumber);
                for(int i = 0; i <= nameCount - 1; i++){
                    if(atoi(inputList->longitude[i]) == queryNumber){
                        //print out example: "Image 000. Location: -23, 135. Name: Kingston
                        printf("Image %03d. Location: %4s,%4s. Name: %4s\n", i, inputList->longitude[i], inputList->latitude[i], inputList->location[i]);
                    }
                }
            }
            // Query: "-y <number>"
            else if(strcmp(&queryInput, "-y") == 0){
                scanf("%d", &queryNumber);
                for(int i = 0; i <= nameCount - 1; i++){
                    if(atoi(inputList->latitude[i]) == queryNumber){
                        printf("Image %03d. Location: %4s,%4s. Name: %4s\n", i, inputList->longitude[i], inputList->latitude[i], inputList->location[i]);
                    }
                }
            }
            else if(strcmp(&queryInput, "-n") == 0){
                scanf("%s", &queryName);
                //printf("%s\n", &queryName);
                //printf("Hi\n");
                for(int i = 0; i <= nameCount - 1; i++){
                    //Not working
                    if(strcmp(inputList->location[i], &queryName) == 0){
                        printf("Image %03d. Location: %4s,%4s. Name: %4s\n", i, inputList->longitude[i], inputList->latitude[i], inputList->location[i]);
                    }
                }
            }
            else{
                printf("Invalid query\n");
                return 0;
            }
        }

    }
    return 0;
}
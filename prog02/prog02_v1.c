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

        //Query While Loop
        char queryInput;
        int queryNumber;
        char queryName;

        //Query Example "Query: LIST"
        while(scanf("%s", &queryInput)){
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
                        //Example: "Image 000. Location: -23, 135. Name: Kingston
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
            // Query: "-n <name>"
            else if(strcmp(&queryInput, "-n") == 0){
                scanf("%s", &queryName);
                for(int i = 0; i <= nameCount - 1; i++){
                    if(strcmp(inputList->location[i], &queryName) == 0){
                        printf("Image %03d. Location: %4s,%4s. Name: %4s\n", i, inputList->longitude[i], inputList->latitude[i], inputList->location[i]);
                    }
                }
            }
            else{
                printf("Invalid query");
                return 0;
            }
        }
    }
    return 0;
} 
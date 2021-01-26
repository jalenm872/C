#include <iostream>
#include <string>

//Filter_dups

int main(){
    //User Input
    std::string phrase;
    std::getline(std::cin, phrase);
    int num = phrase.length();

    for(int i = 0; i < num; i++){
        if (phrase[i+1] != phrase[i]){
            std::cout << phrase[i];
        }
    }
    std::cout << std::endl;

    return 0;
}
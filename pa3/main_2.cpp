#include <iostream>
#include <string>

//Palindrome

int main(){
    std::string phrase;
    std::getline(std::cin, phrase);
    int num = phrase.length();
    bool palindrome = true;
    //Case sensitive check
    for(int i = 0; i < num; i++){
        if(phrase[i] < 'a'){
            phrase[i] += 32;
        }
    }
    
    bool correct = true;

    for(int j = 0; j < num; j++){
        if(phrase[j] != phrase[num-j-1]){
            correct = false;
        }
    }

    if (correct == false){
        std::cout << "False" << std::endl;
    }
    else{
        std::cout << "True" << std::endl;
    }
    return 0;
}
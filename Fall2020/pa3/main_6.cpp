#include <iostream>

//str_hash

int hash(std::string string){
    int total = 0;
    for(int i = 0; i < string.length(); i++){
        total = total + (int)string[i];
    }
    std::cout << total << std::endl;
    return 0;
}

int main(){
    std::string phrase;
    std::getline(std::cin, phrase);
    int length = phrase.length();
    hash(phrase);
    return 0;
}
#include <iostream>
#include <string>
//Reverse

//Reverse Function
void reverse(std::string str){
    //Starts from the last letter and prints out each
    for(int i = str.length() - 1; i >= 0; i--){
        std::cout << str[i];
    }
    std::cout << std::endl;
    return;
}

//Main Function
int main(){
    //User Input
    std::string phrase;
    std::getline(std::cin, phrase);

    //Reverse Function call
    reverse(phrase);
    return 0;
}
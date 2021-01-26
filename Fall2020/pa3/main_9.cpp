#include <iostream>
#include <string>


std::string format(std::string phrase){
    int num = phrase.length();
    for(int i = 0; i < num; i++){
        //Periods
        if(phrase[i] == '.'){
            phrase.erase(i--, 1);
            num = phrase.length();
        }
        //Uppercase
        toupper(phrase[i]);
    }
    return phrase;
}

std::string split(std::string phrase, char splitchar, int which){
    std::string value;
    std::string upper;
    bool split = false;
    int num = phrase.length();
    for(int i = 0; i < num; i++){
        //std::cout << phrase[i] << std::endl;
        if(phrase[i] == splitchar){
            split = true;
        }
        if(split == true && which == 2 && phrase[i] != splitchar){
            upper = toupper(phrase[i]);
            value = value + upper;
        }
        if(split == false && which ==1){
            upper = toupper(phrase[i]);
            value = value + upper;
        }
    }
    //std::cout << value << std::endl;
    return value;
}

int main(){
    std::string phrase;
    std::getline(std::cin, phrase);
    phrase = format(phrase);
    //std::cout << phrase << std::endl;
    //Split
    std::string email1 = split(split(split(phrase, ' ', 1), '@', 1),'+', 1);
    std::string email2 = split(split(split(phrase, ' ', 2), '@', 1), '+', 1);
    if (email1 == email2){
        std::cout << "True" << std::endl;
    }
    else{
        std::cout << "False" << std::endl;
    }
    /*
    std::cout << email1 << std::endl;
    std::cout << email2 << std::endl;
    */
    return 0;
}
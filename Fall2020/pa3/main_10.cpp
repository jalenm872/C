#include <iostream>
#include <string>


std::string split(std::string phrase, char splitchar, int which){
    std::string value;
    std::string upper;
    bool split = false;
    bool remove = true;
    int num = phrase.length();
    for(int i = 0; i < num; i++){
        //std::cout << phrase[i] << std::endl;
        if(phrase[i] == splitchar){
            split = true;
        }
        if(split == true && which == 2){
            if(phrase[i] != splitchar || remove == false){
                upper = tolower(phrase[i]);
                value = value + upper;
                remove = false;
            }
        }
        if(split == false && which ==1){
            upper = tolower(phrase[i]);
            value = value + upper;
        }
    }
    //std::cout << value << std::endl;
    return value;
}

int main(){
    std::string phrase;
    std::getline(std::cin, phrase);
    //std::cout << phrase << std::endl;
    //Split
    std::string website = split(split(split(split(phrase, '/', 2), '/', 1), '/', 1),':', 1);
    std::cout << website << std::endl;
    /*
    std::cout << email1 << std::endl;
    std::cout << email2 << std::endl;
    */
   //https://WWW.cs.uri.edu/homepage/class/csc211?year=2019&m=10
    return 0;
}
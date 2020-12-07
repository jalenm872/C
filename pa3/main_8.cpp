#include <iostream>
#include <string>

//Unique character count

int unique(std::string string){
    int count = 0;
    for(int i = 0; i < string.length(); i++){
        if (string[i] == string[i+1]){
            //count--;
        }
        else{
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}

std::string sortString(std::string str) 
{ 
   sort(str.begin(), str.end()); 
   //std::cout << str; 
   return str;
} 

int main(){
    //User input
    std::string phrase;
    std::getline(std::cin, phrase);
    phrase = sortString(phrase);

    //Function call
    unique(phrase);

    return 0;
}
#include <iostream>
#include <sstream>
#include <string>
#include <math.h>

int main(){
    char xlist[100];
    char ylist[100];
    float val;
    std::string phrase;
    std::string temp;
    std::getline(std::cin, phrase);
    int diameter = 0;

/*
    for(int i = 0; i <= 100; i++){
        xlist[i] = phrase[i];
        ylist[i] = phrase[i+2];
    }
*/

    std::stringstream ss(phrase);
    int count = 0;
    while(getline(ss,temp, ' '))
    {
      std::stringstream stream(temp);

      char cstr[temp.size() + 1];
	    strcpy(cstr, temp.c_str());

      if(count % 2 == 0){
          ylist[count] = cstr;
      }
      else{
          xlist[count] = cstr;
      }
      count++;
    }



    /*
    for(int j = 0; j <= 50; j++){
        int temp = sqrt(pow((xlist[j+1] - xlist[j]),2) + pow((ylist[j+1] - ylist[j]),2));
        if(temp > diameter){
            diameter = temp;
        }
    }

    std::cout << xlist[0] << std::endl;
    std::cout << ylist[0] << std::endl;
    std::cout << diameter << std::endl;
    */
    return 0;
}
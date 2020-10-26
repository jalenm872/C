#include <iostream>

//X of Stars

int main(){
    int num;
    //Number of rows
    std::cin >> num;
    if(num < 10 && num > 0){
        if(num % 2 != 0){
            //Rows
            for(int i=1; i <= num; i++){
                //Columns
                for (int j = 1; j <= num; j++){
                    //If Row = Column 
                    if(j == i || j == (num + 1 - i)){
                        std::cout << "*";
                    }
                    //Spaces
                    else{
                    std::cout << " ";
                    }
                }
                //Ends each row
                std::cout << "\n";
            }
        
        }
        else{
            std::cout << "Sorry, not odd\n";
        }
    }
    return 0;
}
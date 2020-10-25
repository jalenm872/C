#include <iostream>

int main(){
    float loan,interest,payment, month;
    month = 0;
    std::cin >> loan >> interest >> payment;
    for(float i = 0; i < loan; i++){
        loan = loan + loan * (1 + interest);
        //Loan amount after every month paid
        loan = loan - payment;
        month++;
    }
    std::cout << month << std::endl;
    return 0;
}
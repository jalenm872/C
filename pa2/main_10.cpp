#include <iostream>

int main(){
    double loan, interest, payment;
    double month = 0;
    std::cin >> loan >> interest >> payment;
    for(int i = 0; i < loan; i++){
        loan = loan + loan * (1 + interest);
        //Loan amount after every month paid
        loan = loan - payment;
    }
    std::cout << month << std::endl;
    return 0;
}
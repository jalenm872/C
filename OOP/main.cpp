//Pracitce with OOP

#include <iostream>
using std::string;

//Employee Class
class Employee{
    public:
        //Name of employee
        string Name;

        //Company the employee works for
        string Company;

        //Age of employee
        int Age;

        void IntroduceYourself(){
            std::cout << "Name - " << Name << std::endl;
            std::cout << "Company - " << Company << std::endl;
            std::cout << "Age - " << Age << std::endl;
        }
};

int main()
{
    //Create Instance of Class Employee
    Employee employee1;
    employee1.Name = "Jalen";
    employee1.Company = "Meta";
    employee1.Age = 21;

    //Calling Class Method
    employee1.IntroduceYourself();
}
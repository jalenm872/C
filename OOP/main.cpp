//Pracitce with OOP

#include <iostream>
using namespace std;
using std::string;

//Abstraction
class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

//Employee Class
class Employee:AbstractEmployee{
    private:
        //Name of employee
        string Name;

        //Company the employee works for
        string Company;

        //Age of employee
        int Age;

    public:
        //Setter Methods
        void setName(string name){
            Name = name;
        }

        void setCompany(string company){
            Company = company;
        }

        void setAge(int age){
            if(age >= 18){
                Age = age;
            }
        }

        //Getter Methods
        string getName(){
            return Name;
        }

        string getCompany(){
            return Company;
        }

        int getAge(){
            return Age;
        }

        //Method
        void IntroduceYourself(){
            cout << "Name - " << Name << endl;
            cout << "Company - " << Company << endl;
            cout << "Age - " << Age << endl;
        }

        //Constructor
        Employee(string name, string company, int age){
            Name = name;
            Company = company;
            Age = age;
        }

        void AskForPromotion(){
            if(Age > 30){
                cout << Name << " got promoted!" << endl;
            }
            else{
                cout << Name << " sorry no promotion for you!" << endl;
            }
        }
};

int main()
{
    //Create Instances of Class Employee
    Employee employee1("Jalen", "Meta", 21);
    Employee employee2("Jeraldyn", "Law Firm", 31);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}
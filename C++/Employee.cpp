#include <iostream>

using namespace std;

class Employee{
    private:
        string Name;
        int Age;
    protected:
        string Company;
    public:
        void setName(string name)
        {
            Name = name;
        }
        string getName()
        {
            return Name;
        }

        void setCompany(string company)
        {
            Company = company;
        }
        string getCompany()
        {
            return Company;
        }

        void setAge(int age)
        {
            if (age>18)
            {
                Age = age;
            }
            else
            {
                cout << "Employee's age invalid!" << endl;
            }
        }
        int getAge()
        {
            return Age;
        }

        void IntroduceYourself()
        {
            cout<< "Name: " << Name << endl;
            cout<< "Company: " << Company << endl;
            cout<< "Age: " << Age << endl;
        }

        virtual void work()
        {
            cout<< Name << " is working."<<endl;
        }

        Employee()
        {

        }

        Employee(string name, string company, int age)
        {
            Name = name;
            Company = company;
            Age = age;
        }
};

class Developer: Employee
{
    public:
        string ProgrammingLanguageSkill;

        Developer()
        {

        }

        Developer(string name, string company, int age, string pSkill):Employee(name, company, age)
        {
            ProgrammingLanguageSkill = pSkill;
        }
        
        void work()
        {
            cout<< getName() << " is working with "<< ProgrammingLanguageSkill << "." <<endl;
        }
        
        void FixBug()
        {
            cout << getName() << " fixed bug using " << ProgrammingLanguageSkill << " who works in "<< Company << " Company." << endl;
        }
};
int main(void)
{
    string name, company, pSkill;
    int age;
    Employee emp1;
    cout << "Type the employee's name:" << endl;
    cin >> name;
    cout << "Type the employee's company:" << endl;
    cin >> company;
    cout << "Type the employee's Age:" << endl;
    cin >> age;
    emp1 = Employee(name, company, age);
    emp1.IntroduceYourself();

    cout << "Type the Developer's skill:" << endl;
    cin >> pSkill;
    Developer d = Developer(name, company, age, pSkill);
    d.work();
    d.FixBug();
    return 0;
}
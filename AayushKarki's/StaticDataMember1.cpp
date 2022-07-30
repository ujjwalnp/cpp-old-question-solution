// Wap to input the info of employee and display their info including the total salary which is increased by 1 lak per employee

#include <iostream>
#include <string>
using namespace std;

class base
{
public:
    string name;
    int age;
    float salary, totalSalary;
    static string companyName;
    static int increasedAmount;

    void getter()
    {
        cout << "Enter the name, age and salary of the employee";
        cin >> name >> age >> salary;
    }

    void setter()
    {
        totalSalary = salary + increasedAmount;
        cout << "The name, age, salary, company name and the Total salay after increment is : " << endl;
        cout << name << "||" << age << "||" << salary << "||" << companyName << "||" << totalSalary << endl;
    }
};

int base::increasedAmount = 100000;
string base::companyName = "Khanar Jute Mill";

int main()
{
    system("clear");
    base b;
    b.getter();
    b.setter();
}
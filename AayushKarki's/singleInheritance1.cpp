#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
    int age;
    string name;
    double dob;
    void setter()
    {
        cout << "Enter the name, age and DOB of  your father " << endl;
        cin >> name >> age >> dob;
    }
};

class Derived : public Base
{
public:
    void getter()
    {
        cout << "The name,age and DOB :" << endl;
        cout << name << endl
             << age << endl
             << dob << endl;
    }
};

int main()
{
    system("clear");
    Derived d;
    d.setter();
    d.getter();
}
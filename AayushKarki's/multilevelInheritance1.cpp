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
class Derived1 : public Derived
{
public:
    string sName;
    void method()
    {
        cout << "enter the name of son " << endl;
        cin >> sName;
    }

    void display()
    {
        cout << "Name of son : " << sName << endl;
    }
};
int main()
{
    system("clear");
    Derived1 d;
    d.setter();
    d.method();
    d.getter();
    d.display();
}

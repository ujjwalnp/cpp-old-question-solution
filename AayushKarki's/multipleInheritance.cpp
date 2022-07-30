#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
    string name;
    int age;
    string location;

    void fun()
    {
        cout << "Enter the name, age and location of the old man " << endl;
        cin >> name >> age >> location;
    }
};

class base1
{
public:
    string name1, name2, name3, name4, name5;
    void method()
    {
        cout << "Enter the name of the son of the old man " << endl;
        cin >> name1 >> name2 >> name3 >> name4 >> name5;
    }
};

class Derived2 : public Base, public base1
{
public:
    void display()
    {
        cout << "The information of the old man is : " << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Address = " << location << endl;
        cout << "sons are : " << name1 << " " << name2 << " " << name3 << " " << name4 << " " << name5 << endl;
    }
};

int main()
{
    system("clear");
    Derived2 d;
    d.fun();
    d.method();
    d.display();
}
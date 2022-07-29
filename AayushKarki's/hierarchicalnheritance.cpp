// When more than one class is inherited from base class is known as heirarchical inheritance
#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
    string name;
    int age;
    bool maritialStatus = true;
    void setter()
    {
        cout << "Enter the name,age and of the young man " << endl;
        cin >> name >> age;
    }
};

class Derived : public Base
{
public:
    string n1, n2, n3, n4, n5;
    void input()
    {
        cout << "Enter the name of the child of old man  " << endl;
        cin >> n1 >> n2 >> n3;
    }

    void display()
    {
        cout << "\nInfo of old man" << endl;
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "maritial status : " << maritialStatus << endl;
        cout << "\nThe info of old man's child " << endl;
        cout << "child 1 : " << n1 << endl
             << "child 2 : " << n2 << endl
             << "child 3 : " << n3 << endl;
    }
};

class Derived1 : public Base
{
public:
    string address;
    void fun()
    {
        cout << "Address of the old man : ";
        cin >> address;
    }

    void output()
    {
        cout << "adress : " << address << endl;
    }
};

int main()
{
    system("clear");
    Derived1 d1;
    Derived d2;
    d1.setter();
    d1.fun();
    d2.input();
    d2.display();
    d1.output();
}
#include <iostream>
using namespace std;
class base
{
public:
    string name;
    int age;
    float height;
    string address;
    void input()
    {
        cout << "Enter the name, age, and height and address of the army " << endl;
        cin >> name >> age >> height >> address;
    }

    virtual void display()
    {
        cout << "Name : " << name << endl
             << "Age : " << age << endl
             << "Height : " << height << endl;
    }
};

class derived : public base
{
public:
    string name, address;
    int age;
    float height;
    void input()
    {
        cout << "Enter the name, age, height and address of the soldier" << endl;
        cin >> name >> age >> height >> address;
    }

    void display()
    {
        cout << "Name : " << name << endl
             << "Age : " << age << endl
             << "Height : " << height << endl
             << "Address : " << address << endl;
    }
};

int main()
{
    base *p;
    derived d;
    p = &d;
    p->input();
    p->display();
}

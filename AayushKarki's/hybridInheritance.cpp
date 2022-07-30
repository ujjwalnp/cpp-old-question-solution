// Wap that illustrates the hybrid inheritance(combo of single and multiple inheritance)
#include <iostream>
#include <string>
using namespace std;
class first
{
public:
    string name;
    int age;
    string address;
    string profession;
    int setter()
    {
        cout << "Enter the name, age, address and profession of the criminal " << endl;
        cin >> name >> age >> address >> profession;
        return 0;
    }

    int getter()
    {
        cout << "Name, age, address and profession of the criminal " << endl;
        cout << name << endl
             << age << endl
             << address << endl
             << profession 
             << endl;
        return 0;
    }
};

class second : public first
{
};

class third
{
public:
    string crime;
    void input()
    {


        cout << "What is the actual crime that the criminal does ? " 
        << endl;
        cin >> crime;
    }
};

class fourth : public second, public third
{
public:
    void display()
    {
        cout << "The crime for which the criminal has been sent to the gail : " << crime;
    }
};

int main()
{
    second s;
    s.setter();
    fourth f;
    f.input();
    s.getter();
    f.display();
}

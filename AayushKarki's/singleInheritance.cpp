// Wap to create a class calle fruit with constructor displaying "I'm a fruit", creating derived class
#include <iostream>
using namespace std;
class Base
{
public:
    int age;
    bool maritialStatus = true;
    void getter()
    {
        cout << "Enter the age and of the young man " << endl;
        cin >> age;
    }
};

class Derived : public Base
{
public:
    void setter()
    {
        cout << "The age and maritial status of the young man is :  " << endl;
        cout << age << endl
             << maritialStatus << endl;
    }
};
int main()
{
    system("clear");
    Derived d;
    d.getter();
    d.setter();
}

#include <iostream>
#include <string>
using namespace std;
class cpp
{
public:
    string name;
    int age;
    void fun(string n)
    {
        name = n;
        cout << "Function with 1 argument is invoked " << endl;
        cout << "Name = " << name << endl;
    }
    void fun(string n, int a)
    {
        name = n;
        age = a;
        cout << "Function with 2 argument is invoked " << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

int main()
{
    cpp c;
    c.fun("Tofah");
    c.fun("", 22);
    c.fun("Aayush", 20);
}
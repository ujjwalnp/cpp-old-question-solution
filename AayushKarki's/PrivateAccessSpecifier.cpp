#include <iostream>
#include <string>
using namespace std;
class base
{
private:
    string name;
    int age;
    float price;

private:
    void input()
    {
        cout << "Enter name, age and price " << endl;
        cin >> name >> age >> price;
    }

    void output()
    {
        cout << "name, age and price is " << endl;
        cout << name << "||" << age << "||" << price << endl;
    }
};

// Derived class
// here since the data are private so the mehtod function can access and display the name, age and price in the console
class child : public base
{
    // void method()
    // {
    //     cout << "Name, age and price is : " << name << "||" << age << "||" << price << endl;
    // }
};

// can't be accessed using the . operator since the member function in the base class is private
int main()
{
    base b;
    // b.input();
    // b.output();
}
#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    string name = "joe";
    void display()
    {
        cout << "The name of the student is : " << name << endl;
    }
};

class derived : public base
{
public:
    string name = "mike";
    void display()
    {
        cout << "The name of the student is : " << name << endl;
    }
};

int main()
{
    system("clear");
    derived d;
    // The function is overridden here
    d.display();
    d.base::display(); // explicitly calling the display fun of the base class using the scope resolution operator in the same way we do in the ambiguity resolution of the multiple inheritance
    base b;
    b.display();
}
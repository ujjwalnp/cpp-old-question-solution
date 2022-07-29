// For public
#include <iostream>
using namespace std;
class base
{
public:
    int rnum = 33;

    void fun()
    {
        cout << rnum << " is the roll num accessed from the mem fun of base class" << endl;
    }
};

class c1 : public base
{
public:
    void method()
    {
        cout << rnum << " is the roll num accessed from the derived class" << endl;
    }
};

int main()
{
    system("clear");
    base b;
    b.fun();
    c1 d;
    d.method();
    return 0;
}

// PUBLIC => When we use public access specifiers then the data members can be acessed all of the object of that class using dot(.) opeator and the derived class can also access the data member

// PRIVATE => If we use private access specifier, only the friend fun can access the data of the particular class and the methods of the same class

// PROTECTED => If we use the protected access specifiers then only the member fun and the derived class (child/sub class)
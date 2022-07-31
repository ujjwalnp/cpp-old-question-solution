// virtual fun
#include <iostream>
using namespace std;
class first
{
public:
    void fun()
    {
        cout << "It is the fun of the base class" << endl;
    }

    virtual void method()
    {
        cout << "It is the method of the base class" << endl;
    }
};

class second : public first
{
public:
    void fun()
    {
        cout << "It is the fun of the derived class " << endl;
    }
    void method()
    {
        cout << "It is the method of the derived class " << endl;
    }
};

int main()
{
    first *f;
    second s;
    f = &s;
    f->method();
    f->fun();
}
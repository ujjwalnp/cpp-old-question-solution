#include <iostream>
using namespace std;
class base
{
public:
    virtual void disp() = 0;
};

class derived : public base
{
public:
    void disp()
    {
        cout << "It is the display function that is virtual in nature " << endl;
    }
};

class derived1 : public base
{
public:
    void disp()
    {
        cout << "It is the display function of second derived class that is virtual in nature " << endl;
    }
};

int main()
{
    system("clear");
    base *p;
    derived d;
    derived1 d1;
    p = &d;
    p->disp();
    p = &d1;
    p->disp();
}
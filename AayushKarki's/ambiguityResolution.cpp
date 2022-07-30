#include <iostream>
using namespace std;
class b1
{
public:
    void fun()
    {
        cout << "first base class" << endl;
    }
};

class b2
{
public:
    void fun()
    {
        cout << "second base class" << endl;
    }
};

class der : public b1, public b2
{
public:
    void fun()
    {
        cout << "first derived class " << endl;
    }
};

int main()
{
    system("clear");
    der d;
    d.fun();
    d.b1::fun();
    d.b2::fun();
}

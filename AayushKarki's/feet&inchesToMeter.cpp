// 1 meter = 3.28 feet  1 feet = 12 inch
#include <iostream>
using namespace std;
class f
{
public:
    float feet;

public:
    void fun()
    {
        cout << "feet = ";
        cin >> feet;
    }
};

class i
{
public:
    float inch;

public:
    void method()
    {
        cout << "inches = ";
        cin >> inch;
    }
};

class m
{
private:
    float meter;

public:
    m(f F)
    {
        meter = F.feet / 3.28;
    }
    void disp()
    {
        cout << "meter : " << meter << " is obtained by conversion of feet : " << feet;
    }
};

int mani()
{
    f q;
    q.fun();
}

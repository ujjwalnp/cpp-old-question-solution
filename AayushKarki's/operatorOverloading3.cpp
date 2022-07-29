// program to overload the * operator showing the multiplication of two object
#include <iostream>
using namespace std;
class base
{
private:
    int a, b, mul;

public:
    void input(int x)
    {
        a = x;
    }

    void input(int y)
    {
        }

    void display()
    {
        cout << "numbers are : " << a << "||" << b << endl;
    }

    void opMul()
    {
        cout << "Multiplication is : " << a << endl;
    }

    void operator*()
    {
        a = a * b;
    }
};

int main()
{
    base b;
    b.input(2);
    b.display();
    b.input(3);
    *b;
    b.opMul();
}

// Find maximum of two private member in two different classes (Similar question)
#include <iostream>
using namespace std;
class Class2;
class Class1
{
    int a;

public:
    void setValue()
    {
        cout << "Enter the value of a: ";
        cin >> a;
    };
    friend void maximum(Class1, Class2);
};
class Class2
{
    int b;

public:
    void setValue()
    {
        cout << "Enter the value of b: ";
        cin >> b;
    };
    friend void maximum(Class1, Class2);
};

void maximum(Class1 x, Class2 y)
{

    if (x.a > y.b)
        cout << "a is greater than b";
    else
        cout << "b is greater than a";
}
int main()
{
    Class1 c1;
    Class2 c2;
    c1.setValue();
    c2.setValue();
    maximum(c1, c2);
    return 0;
}
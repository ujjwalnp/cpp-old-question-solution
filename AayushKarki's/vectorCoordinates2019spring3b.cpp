// wap to input two vector coordinates from the "Base" class and derived class named  "derived" inherits all the properties of base class . derived class must contain a function named add_vector() that add the two vector input form the base class and finally display the result from a function display that is a friend with the base class
#include <iostream>
using namespace std;
class Base
{
public:
    float e1, e2, sum;

public:
    void input()
    {
        cout << "Enter the 2 vector coordinates " << endl;
        cin >> e1 >> e2;
    }
    int assign()
    {
        sum = add_vector();
        return 0;
    }
    int add_vector();
    friend void disp(Base b);
};

// Defination of frined function
void disp(Base b)
{
    cout << "The sum is : " << b.sum << endl;
}

class Derived : public Base
{
public:
    float add_vector()
    {
        sum = e1 + e2;
        return sum;
    }
};

int main()
{
    Base b;
    Derived d;
    d.input();
    b.add_vector();
    disp(b);
}
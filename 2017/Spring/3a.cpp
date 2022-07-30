// wap to illustutrate copy constructor and explain each line of code
#include <iostream>
using namespace std;
class base
{
protected:
    int age;
    float marks;

public:
    base()
    {
        cout << "enter the age and marks of the student" << endl;
        cin >> age >> marks;
    }
    void fun()
    {
        cout << "The age and marks of the student is : " << age << "||" << marks << endl;
    }
    base(base &b);
};

base::base(base &b)
{
    cout << "The sum of age and marks is : " << b.age + b.marks << endl;
}

int main()
{
    base b;
    b.fun();
    base b1(b);
}
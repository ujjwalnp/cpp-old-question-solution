// done by aayush
// Question : 

// wap to swap variables of two classes via friend function
#include <iostream>
using namespace std;
class second; // forward decleration
class first
{
private:
    int a;

public:
    void input()
    {
        cout << "num 1 : ";
        cin >> a;
    }
    void disp()
    {
        cout << a;
    }

    friend void fun(first &f, second &s);
};

class second
{
private:
    int b;

public:
    void input1()
    {
        cout << "num 2 : ";
        cin >> b;
    }
    void disp()
    {
        cout << b;
    }

    friend void fun(first &f, second &s);
};

void fun(first &f, second &s)
{
    int t;
    t = f.a;
    f.a = s.b;
    s.b = t;
}

int main()
{
    first f;
    f.input();
    second s;
    s.input1();
    cout << "Before swapping : ";
    f.disp();
    s.disp();

    cout << "After swapping : ";
    fun(f, s);
    f.disp();
    s.disp();
}
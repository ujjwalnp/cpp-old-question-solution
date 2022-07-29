#include <iostream>
using namespace std;
class A
{
    int a, b, sum, mul, div;

public:
    void input()
    {
        cout << " a , b" << endl;
        cin >> a >> b;
        div = a / b;
    }

    friend void add(A ob);
    friend class prog;
};

void add(A ob)
{
    int c;
    ob.sum = ob.a + ob.b;
    ob.mul = ob.a * ob.b;
    cout << "diff = " << ob.a - ob.b << endl;
    cout << "division = " << ob.div << endl;
    cout << "mul = " << ob.mul << endl;
}

// Friend class
class prog
{
public:
    void disp(A ob)
    {
        cout << "The division is : " << ob.div << endl;
    }
};

int main()
{
    system("clear");
    A ob;
    ob.input();
    add(ob);

    prog p;
    p.disp(ob);
    return 0;
}
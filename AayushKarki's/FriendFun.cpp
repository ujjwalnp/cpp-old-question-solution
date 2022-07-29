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

int main()
{
    system("clear");
    A ob;
    ob.input();
    add(ob);
    return 0;
}
#include <iostream>
using namespace std;
class class2;
class class1
{
private:
    int a;

public:
    void setvalue()
    {
        cout << "enter any number : ";
        cin >> a;
    }
    friend void comp(class1 &t, class2 &t1);
};

class class2
{
private:
    int b;

public:
    void setvalue()
    {
        cout << "enter second value : ";
        cin >> b;
    }
    friend void comp(class1 &t, class2 &t1);
};
void comp(class1 &t, class2 &t1)
{
    if (t.a > t1.b)
        cout << "Maximum num : " << t.a << endl;
    else
        cout << "Maximum num : " << t1.b << endl;
}
int main()
{
    class1 C;
    C.setvalue();
    class2 d;
    d.setvalue();
    comp(C, d);
}
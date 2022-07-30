#include <iostream>
using namespace std;
void fun()
{
    int a, b;
    cout << "enter the two numbers" << endl;
    cin >> a >> b;
    try
    {
        if (b == 0)
        {
            throw(b);
        }
        if (b == 1)
        {
            throw(1.1);
        }

        else
            cout << "The division of two number is : " << a / b << endl;
    }
    catch (int a)
    {
        cout << "division by " << a << " isn't possible " << endl;
    }
    catch (double s)
    {
        cout << "division by 1 is the same value" << endl;
    }
}
int main()
{
    fun();
}

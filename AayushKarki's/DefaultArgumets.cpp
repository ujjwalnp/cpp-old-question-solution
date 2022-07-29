#include <iostream>
using namespace std;

class base
{
public:
    int n1, n2;
    void fun(int a = 0, int b = 0)
    {
        n1 = a;
        n2 = b;
        cout << "two nums are : " << n1 << " " << n2 << endl;
    }
};

int main()
{
    system("clear");
    base b;
    b.fun();
    b.fun(1);
    b.fun(1, 2);
}
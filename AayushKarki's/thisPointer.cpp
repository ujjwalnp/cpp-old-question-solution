// This pointer is used if we have the same local and instance variable. i.e if the same name is used as the name of local variable and instance variable than in such case this pointer is used to resolve the problem.
#include <iostream>
using namespace std;
class base
{
private:
    int a, b;

public:
    void input(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void show()
    {
        cout << "a = " << a << endl
             << "b = " << b << endl;
    }
};

int main()
{
    base b;
    b.input(2, 3);
    b.show();
}
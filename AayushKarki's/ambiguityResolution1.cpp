#include <iostream>
using namespace std;
class first
{
public:
    int n1 = 33, n2 = 44;
    void operation()
    {
        cout << "sum of element of first class = " << n1 + n2 << endl;
    }
};

class second
{
public:
    int n1 = 22, n2 = 24;
    void operation()
    {
        cout << "sum of element of second class = " << n1 + n2 << endl;
    }
};

class third : public first, public second
{
public:
    int n1 = 33, n2 = 77;
    void operation()
    {
        cout << "sum of element of third class = " << n1 + n2 << endl;
    }
};

int main()
{
    third t;
    t.operation();
    t.first::operation();
    t.second::operation();
}
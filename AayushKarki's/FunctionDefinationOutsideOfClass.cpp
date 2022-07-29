#include <iostream>
using namespace std;
class base
{
public:
    float n1, n2;
    int input();
    int output();
};

int base::input()
{
    cout << "Enter 2 numbers " << endl;
    cin >> n1 >> n2;
    return 0;
}

int base::output()
{
    cout << "sum = " << n1 + n2 << endl
         << "Product = " << n1 * n2 << endl;
    return 0;
}

int main()
{
    system("clear");
    base b;
    b.input();
    b.output();
    return 0;
}
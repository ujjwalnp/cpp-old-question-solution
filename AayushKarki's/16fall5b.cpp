// function template to calculate the sum,multiplication and average of the numbers
#include <iostream>
using namespace std;
template <class t>
int calc(t a, t b)
{
    cout << "sum : " << a + b << endl;
    cout << "product : " << a * b << endl;
    cout << "average : " << (a + b) / 2 << endl;
    return 0;
}
int main()
{
    calc(4, 4);
}
// Make a function template which prints the multiplication of two numbers(intergers and floats)
#include <iostream>
using namespace std;
template <class t>
t prod(t n1, t n2, t mul)
{
    mul = n1 * n2;
    return mul;
}

int main()
{
    system("clear");
    cout << prod(1, 2, 0) << endl;
}
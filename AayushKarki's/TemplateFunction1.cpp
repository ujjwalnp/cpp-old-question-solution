// Make a function template which prints the sum of two numbers(integers and floats)
#include <iostream>
using namespace std;
template <class t>
t sum(t a, t b) // t can be replaced by int , float
{
    cout << "sum is : " << a + b << endl;
    return 0;
}

int main()
{
    sum(3, 3);
    sum(3.3, 3.3);
}
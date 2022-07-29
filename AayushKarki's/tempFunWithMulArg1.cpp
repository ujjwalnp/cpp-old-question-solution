// Wap that find out the product of two different types of data via template function
#include <iostream>
using namespace std;
template <class a, class b>
void multiplier(a n1, b n2)
{
    cout << "The product of " << n1 << " & " << n2 << " is : " << n1 * n2 << endl;
}

int main()
{
    system("clear");
    multiplier(1, 2.2);
}
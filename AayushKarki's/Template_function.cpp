#include <iostream>
using namespace std;
template <class t>
t maximum(t first, t second) // instead of t maximum , we can use the int, float data type
{
    if (first > second)
        cout << "Maximum is : " << first << endl;
    else
        cout << "Maximum is : " << second << endl;
    return 0;
}

int main()
{
    maximum(2, 3);
    maximum(3, 2);
    maximum(2.2, 3.3);
    maximum(3.3, 3.1);
}
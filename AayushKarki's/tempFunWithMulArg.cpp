#include <iostream>
using namespace std;
template <class t, class t1>
float maximum(t a, t1 b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "The largest number is : " << maximum(1, 0.2) << endl;
}
// Wap that find out the sum of two different types of data via template function
#include <iostream>
using namespace std;
template <class a, class b>
float add(a n1, b n2)
{
    float sum = n1 + n2;
    return sum;
}

int main()
{
    system("clear");
    cout << add(1, 2.2) << endl;
    ;
}
// Start
// Read a,b, c values
// if d > 0 then
// r1 = b + sqrt(d) / (2 * a)
// r2 = b sqrt(d) / (2 * a)
// Otherwise if d = 0 then
// compute r1 = -b / 2a, r2 = -b / 2a
// print r1, r2 values
// Otherwise if d < 0 then print roots are imaginary
// Stop
#include <iostream>
#include <cmath>
using namespace std;
template <class t, class t1>
float quad(t x, t1 y, t z)
{
    t a = x;
    t b = y;
    t c = z;
    t d, r1, r2, r;
    d = (b * b) - 4 * a * c;
    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "The roots are : r1 = " << r1 << " r2 = " << r2 << endl;
    }
    else if (d == 0)
    {
        r = -b / (2 * a);
        cout << "Root is : r = " << r << endl;
    }
    else
    {
        cout << "The roots are imaginary" << endl;
    }
    return 0;
}

int main()
{
    quad(2.4, 7, 3.3);
}
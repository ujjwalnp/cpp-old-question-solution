// Polar to rectangle type conversion using the type conversion
#include <iostream>
#include <math.h>
using namespace std;

// polar class
class polarClass
{
public:
    float r, th, ang;
    polarClass()
    {
        // no need
    }
    polarClass(float a, float b)
    {
        r = a;
        th = b;
    }
    void show()
    {
        cout << "In polar form:\n\t r=" << r << " and theta=" << th << endl;
    }
};

// rectangular class
class rectangularClass
{
    float x, y;

public:
    rectangularClass()
    {
        // no need
    }
    rectangularClass(polarClass p)
    {
        x = p.r * cos(p.th);
        y = p.r * sin(p.th);
    }
    void show()
    {
        cout << "\nIn Rectangular form :\n\tx=" << x << "and y=" << y;
        cout << endl
             << "In the complex form : " << x << " + " << y << "i " << endl;
    }
};

int main()
{
    system("clear");
    polarClass p(15.5, 13.14 / 2);
    p.show();
    rectangularClass r;
    r = p;
    r.show();

    return 0;
}

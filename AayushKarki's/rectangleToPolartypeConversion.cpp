// rectangular to polar type conversion
#include <iostream>
#include <cmath>
using namespace std;
class rectangle
{
public:
    float x, y;
    rectangle()
    {
    }

    rectangle(float q, float w)
    {
        x = q;
        y = w;
    }

    void output()
    {
        cout << "\nThe rectangular coordinates are : x = " << x << " || "
             << " y = " << y << endl;
    }
};

class polar
{
public:
    float r, a, th;
    polar()
    {
    }

    polar(rectangle R)
    {
        th = atan(R.y / R.x);
        r = R.x / cos(th);
        a = (th * 180) / 3.14;
    }

    void show()
    {
        cout << "The polar form is : r = " << r << "||"
             << " a = " << a << endl;
    }
};

int main()
{
    rectangle t(14.8, 4.3);
    t.output();
    polar p;
    p = t;
    p.show();
    return 0;
}
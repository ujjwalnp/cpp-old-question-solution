#include <iostream>
#include <cmath>
using namespace std;
#define pi 3.14

/* It's a class that has two functions, one that takes in the radius of a circle and one that outputs the area and circumference of a circle */
class base
{
public:
    float rad;
    int method()
    {
        cout << "radius = ";
        cin >> rad;
        return 0;
    }
    int output()
    {
        cout << "the area of the circle is : " << pi * pow(rad, 2) << " and the circumference is : " << 2 * pi * rad << endl;
        return 0;
    }
};

int main()
{
    system("clear");
    base b;
    b.method();
    b.output();
    return 0;
}

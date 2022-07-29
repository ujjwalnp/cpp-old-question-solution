// Wap to convert the an object of polar class to object of rectangular class using type conversion routine
#include <iostream>
using namespace std;
class polar
{
    float r, a;

public:
    polar(float R, float A)
    {
        r = R;
        a = A;
    }

    void display()
    {
        cout << "Radius = " << r << endl;
        cout << "Angle = " << a << endl;
    }

    float giveRadius()
    {
        return r;
    }
    float giveAngle()
    {
        return a;
    }
};

int main()
{
    system("clear");
    polar p1(51.5, 88.7);
    p1.display();
}
// rectangle to polar conversion in simpler form
#include <iostream>
#include <math.h>
using namespace std;
class base
{
private:
    float x, y;
    float rad, thetaInRad, angleinDeg;

public:
    void input()
    {
        cout << "Enter the value of the of the rectangle coordinates x &  y respectively" << endl;
        cin >> x >> y;
        rad = sqrt((pow(x, 2) + pow(y, 2)));
        thetaInRad = atan(y / x);
        angleinDeg = (thetaInRad * 180) / 3.14;
    }

    void disp()
    {
        cout << "The polar coordinates is : r = " << rad << " angle = " << angleinDeg << endl;
    }
};

int main()
{
    system("clear");
    base b;
    b.input();
    b.disp();
}
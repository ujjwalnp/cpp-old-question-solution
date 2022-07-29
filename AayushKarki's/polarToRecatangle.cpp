// polar coordinates : r, theta                    Recatangular coordinates : x  y
// polar to rectangle conversion
#include <iostream>
#include <cmath>
using namespace std;
class polar
{
private:
    float r, a;     // for the polar coordinates
    float x, y, th; // for the rectangular coordinates
public:
    void input()
    {
        cout << "Enter the polar coordinates i.e r and theta (actually angle)" << endl;
        cin >> r >> a;
    }

    void disp()
    {
        th = a * 3.14 / 180;
        x = r * cos(th);
        y = r * sin(th);
        cout << "The rectagular coordinates are : " << x << " || " << y << endl;
    }
};

int main()
{
    system("clear");
    polar p;
    p.input();
    p.disp();
}
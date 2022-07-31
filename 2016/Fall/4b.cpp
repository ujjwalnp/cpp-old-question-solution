// done by aayush
// Question : 

#include <iostream>
using namespace std;
class gigs
{
public:
    float gb;

public:
    gigs() {}
    gigs(float g)
    {
        gb = g;
    }
    void disp()
    {
        cout << "Supplied storage : " << gb << " gb" << endl;
    }
};

class megabyte
{
protected:
    float mb;

public:
    megabyte() {}
    megabyte(gigs g)
    {
        mb = g.gb * 1024;
    }

public:
    void show()
    {
        cout << "The conversion to mb : " << mb << endl;
    }
};

int main()
{
    gigs G(1);
    G.disp();
    megabyte m;
    m = G;
    m.show();
}
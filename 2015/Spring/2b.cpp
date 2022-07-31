// done by aayush
// Question : 

#include <iostream>
using namespace std;
class cmp2;
class cmp1
{
public:
    int r1, i1;

public:
    cmp1(int R, int I)
    {
        r1 = R;
        i1 = I;
    }
};
class cmp2
{
public:
    int r2, i2, rs, is;

public:
    cmp2(int R1, int I1)
    {
        r2 = R1;
        i2 = I1;
    }

    void addCmpx(cmp1 c1, cmp2 c2)
    {
        rs = c1.r1 + c2.r2;
        is = c1.i1 + c2.i2;
    }
    void disp()
    {
        cout << "The sum of the complex num is : " << rs << " || " << is << endl;
    }
};
int main()
{
    cmp1 q(1, 2);
    cmp2 h(2, 3);
    h.addCmpx(q, h);
    h.disp();
};
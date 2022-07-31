// done by aayush
// Question : 

// computing the complex num via dynamic cons
#include <iostream>
using namespace std;
class cmplx
{
public:
    int *r;
    int *i;
    cmplx()
    {
        i = new int;
        r = new int;
        *r = 3;
        *i = 4;
    }
    void disp()
    {
        cout << "The real and imaginary term is : " << *r << " || " << *i << endl;
    }
};
int main()
{
    cmplx c;
    c.disp();
}
#include<iostream>
using namespace std;
class base
{
  public:
  float a, b, prod;
  void input (float x, float y)
  {
    a = x;
    b = y;
  }

  void disp ()
  {
    cout << "entered number : " << a << "||" << b << endl;
  }

  void show ()
  {
    cout << "Product is : " << prod << endl;
  } 

  void operator * ()
  {
     a = a * b;
     
  }
};

int
main ()
{
  base b;
  b.input (2.3, 1);
  *b;
  b.show ();
}

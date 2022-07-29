// Here the conversion is done via cast operator
/*A cast operator is an unary operator which forces one datatype to be converted into another datatype.
C++ supports 4 types of casting :
1. Static casting
2. Dynamic casting
3. Constant casting
4 Reinterpret casting

           For example :
#include <iostream>
using namespace std;
int main()
{
   float f = 3.5;
   int b = static_cast<int>(f); // static casting
   cout << b << endl;
}

       Advantages of type conversion :

1. This is done to take advantage of certain features of type hierarchies or type representation .2. It helps to compute expressions containing variables of different datatypes.
*/
// aayena aastha mam lai sodne
#include <iostream>
#include <string>
using namespace std;
class cpp
{
public:
    string fName, sName, fullName;
    cpp(string f)
    {
        fName = f;
    }

    cpp(string s)
    {
        sName = s;
        fullName = fName + sName;
        cout << "The full name is : " << fullName << endl;
    }
};
int main()
{
    cpp c1("mike");
    c1("Banning");
}
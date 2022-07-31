#include <iostream>
#include <string>
using namespace std;
class geeks
{
    const char *p;

public:
    // default constructor
    geeks()
    {
        // allocating memory at run time
        p = new char[6];
        p = "joe";
    }

    void display()
    {
        cout << p << endl;
    }
};

int main()
{
    geeks obj;
    obj.display();
}
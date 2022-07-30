#include <iostream>
using namespace std;
class fclass
{
private:
    int age;

public:
    fclass() : age(0)
    {
        cout << "constructor having no arguments of base class is invoked" << endl;
    }
    void disp()
    {
        cout << "age : " << age << endl;
    }
};

class sclass : public fclass
{
public:
    sclass()
    {
        cout << "constructor having no arguments of first derivedclass is invoked" << endl;
    }
};

int main()
{
    system("clear");
    sclass s;
    s.disp();
}
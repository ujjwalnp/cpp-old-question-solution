// 1. Refrence variable is the alias of the already made variables in cpp that does the same job as done by the variaable, where it save the refrence of the particular varible that has to be refered

// 2. Once a refrence is created, we can either use the refrence name or the varible name to access the particular set of data

/*
Refrence and pointers are totally different things and some of the differences are listed below


a> once a refrence is created, we can't change the refrence to other variables which is not the same case in pointer since pointer can point to any variable it want at any time

b> Refrence must be initialized when it is created but the pointer can be initilized at any time
c> There is no any null refrence but the null pointer exits
*/

#include <iostream>
using namespace std;

class base
{
public:
    int value = 44;
    // refrence is created
    int &ref = value;

    void method()
    {
        cout << "The value is : " << value << endl;
        cout << "The reffered value is : " << ref << endl;
        cout << "Adress of value is : " << &value << endl;
        cout << "Adress of ref is : " << &ref << endl;
    }
};

int main()
{
    system("clear");
    base b;
    b.method();
}
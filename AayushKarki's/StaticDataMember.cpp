#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    string name;
    int age;
    // declaration of static data member
    static string cName, location;
    static int estd;

    void setter()
    {
        cout << "Enter the name and age of the student " << endl;
        cin >> name >> age;
    }

    void getter()
    {
        cout << "name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "college name = " << cName << endl;
        cout << "estd = " << estd << endl;
        cout << "location = " << location << endl;
    }
};

// static data member defination
string base::cName{"CCMT"}, base::location{"Tutepani,lalitpur"};
int base::estd{2001};

int main()
{
    system("clear");
    base b;
    b.setter();
    b.getter();
}
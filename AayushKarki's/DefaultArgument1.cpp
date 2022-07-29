/*
Wap to set the default value of name, roll num, mark and school name of the student then
a> change the value of the student name
b> change the value of roll number and display the function
c> don't change any thing and display the info
d> change the info and display the function
*/

#include <iostream>
#include <string>
using namespace std;

class base
{
public:
    string name, sname;
    int rnum;
    float marks;

    void getter(string n = "Student1", int r = 0, float m = 0, string Sname = "xyz")
    {
        name = n;
        rnum = r;
        marks = m;
        sname = Sname;
    }
    void setter()
    {
        cout << "\nThe name, roll num, obtained marks and school name of the boy is : " << endl;
        cout << name << " " << rnum << " " << marks << " " << sname << endl;
    }
};

int main()
{
    system("clear");
    base b;
    b.getter();
    b.setter();

    b.getter("joe");
    b.setter();

    b.getter("mike", 11, 22.2, "Nawa Kiran");
    b.setter();
}
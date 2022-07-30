// wap in c++ to show the multipath inheritance
#include <iostream>
#include <cstring>
using namespace std;
class University
{
protected:
    char Uname[10], Ulocation[10];

public:
    University(char a[], char b[])
    {
        strcpy(Uname, a);
        strcpy(Ulocation, b);
    }
    void display()
    {
        cout << "University name=" << Uname << endl
             << "University location=" << Ulocation << endl;
    }
};
class Affiliated : virtual public University
{
protected:
    char Aname[10], Aaddress[10];
    int progNum;

public:
    Affiliated(char a[], char b[], char c[], char d[], int e) : University(a, b)
    {
        strcpy(Aname, c);
        strcpy(Aaddress, d);
        progNum = e;
    }
    void display()
    {
        cout << "Affiliated Name=" << Aname << endl
             << "Affiliated adress=" << Aaddress << endl
             << "Program Number=" << progNum << endl;
    }
};
class Constituent : virtual public University
{
protected:
    char Sname[10], Sdean[10], SprogName[10];

public:
    Constituent(char a[], char b[], char f[], char g[], char h[]) : University(a, b)
    {
        strcpy(Sname, f);
        strcpy(Sdean, g);
        strcpy(SprogName, h);
    }
    void display()
    {
        cout << "Constituent College Name-=" << Sname << endl
             << "College Dean=" << Sdean << endl
             << "Program Name=" << SprogName << endl;
    }
};
class Student : public Affiliated, public Constituent
{
protected:
    char name[10], program[10];
    int enrollY;

public:
    Student(char a[], char b[], char c[], char d[], int e, char f[], char g[], char h[], char i[], char j[], int k) : University(a, b), Affiliated(a, b, c, d, e), Constituent(a, b, f, g, h)
    {
        strcpy(name, i);
        strcpy(program, j);
        enrollY = k;
    }
    void display()
    {
        cout << "Name=" << name << endl
             << "Program=" << program << endl
             << "Enrolled Year=" << enrollY << endl;
    }
};
int main()
{
    Student S1("Pokhara_University", "Pokhara_Nepal", "Cosmos", "Tutepani", 5, "SOE", "Rabin", "BEIT", "sabin", "BCV", 2078);
    S1.University::display();
    S1.Affiliated::display();
    S1.Constituent::display();
    S1.display();
    return 0;
}
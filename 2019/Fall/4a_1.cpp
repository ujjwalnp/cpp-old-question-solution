// by aayush

// wap by realizing the necessary mem function to read and display information of individual object.Every class should contain at least one constructor and should be inherited to other classes as well
#include <iostream>
#include <string>
using namespace std;
class University
{
protected:
    string uname, ulocation;

public:
    University()
    {
        cout << "enter the name of the university and the location " << endl;
        cin >> uname >> ulocation;
    }

    void output()
    {
        cout << "The necessary info of the uni " << endl;
        cout << "Name : " << uname << endl
             << "Address : " << ulocation << endl;
    }
};

// derived class
class AffiliatedCollege : virtual public University
{
protected:
    string aname, aAdress, aNoPrgm;

public:
    AffiliatedCollege()
    {
        cout << "enter the name, address and no of program available in the affiliated university" << endl;
        cin >> aname >> aAdress >> aNoPrgm;
    }
    void disp()
    {
        cout << "The necessary info of the affiliated college" << endl;
        cout << "Name : " << aname << endl
             << "Address" << aAdress << endl
             << "No of program : " << aNoPrgm << endl;
    }
};

class ConstitutentCollege : virtual public University
{
protected:
    string cname, cdean, cnoofprgm;

public:
    ConstitutentCollege()
    {
        cout << "enter the dean name, constitutent college name and no of program available" << endl;
        cin >> cdean >> cname >> cnoofprgm;
    }
    void fun()
    {
        cout << "The necessary info of the constitutent college " << endl;
        cout << "Dean name : " << cdean << endl
             << "Name of college : " << cname << endl
             << "No of program : " << cnoofprgm << endl;
    }
};

class student : public AffiliatedCollege, public ConstitutentCollege
{
protected:
    string sname, program, enrolledYear;

public:
    student()
    {
        cout << "enter the studnet name, program in which he/she is involved  and the enrolled year " << endl;
        cin >> sname >> program >> enrolledYear;
    }
    void subroutine()
    {
        cout << "The necessary info of the student is " << endl;
        cout << "name : " << sname << endl
             << "involved program : " << program << endl
             << "Enrolled year : " << enrolledYear << endl;
    }
};

int main()
{
    student q;
    q.output();
    q.disp();
    q.fun();
    q.subroutine();
}
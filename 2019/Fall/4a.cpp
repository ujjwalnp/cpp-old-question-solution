// by ankit

#include <iostream>
#include <string.h>
using namespace std;
class University
{
private:
    char uname[20]; 
    char location[20];

public:
    University(char un[], char loc[])
    {
        strcpy(uname, un);
        strcpy(location, loc);
    }
    void display()
    {
        cout << "University name=" << uname << endl;
        cout << "University location=" << location << endl;
    }
};
class Affiliated_College : virtual public University
{
private:
    char cname[20];
    char address[20];
    int no_of_programs;

public:
    Affiliated_College(char un[], char loc[], char cn[], char addr[], int nop) : University(un, loc)
    {
        strcpy(cname, cn);
        strcpy(address, addr);
        no_of_programs = nop;
    }
    void display()
    {
        cout << "Affiliated College Name=" << cname << endl;
        cout << "Address=" << address << endl;
        cout << "Number of programs=" << no_of_programs << endl;
    }
};
class Constituent_College : virtual public University
{
private:
    char school[20];
    char dean[20];
    char name_of_program[20];

public:
    Constituent_College(char un[], char loc[], char sn[], char d[], char npro[]) : University(un, loc)
    {
        strcpy(school, sn);
        strcpy(dean, d);
        strcpy(name_of_program, npro);
    }
    void display()
    {
        cout << "School name=" << school << endl;
        cout << "Dean name=" << dean << endl;
        cout << "Name of Program=" << name_of_program << endl;
    }
};
class Student : public Affiliated_College, public Constituent_College
{
private:
    char student_name[20];
    char program[20];
    int enrolled_year;

public:
    Student(char un[], char loc[], char cn[], char addr[], int nop, char sn[], char d[], char npro[], char stn[], char pro[], int year) : Affiliated_College(un, loc, cn, addr, nop), Constituent_College(un, loc, sn, d, npro), University(un, loc)
    {
        strcpy(student_name, stn);
        strcpy(program, pro);
        enrolled_year = year;
    }
    void display()
    {
        cout << "Student name=" << student_name << endl;
        cout << "Program=" << program << endl;
        cout << "Enrolled year=" << enrolled_year << endl;
    }
};
int main()
{
    Student
        st("Pokhara", "Dhungepatan", "EEC", "Sanepa", 3, "Engineering", "Bharat", "Civil", "Ankit", "IT", 2021);
    st.University::display();
    st.Affiliated_College::display();
    st.Constituent_College::display();
    st.display();
    return 0;
}

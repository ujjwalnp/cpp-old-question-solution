// Wap that creates the class person with data members Name, age, and address. Create another class Teacher with data member qualification and department. Also create another class Student with data member program and semester. Both class are inherited from the class person. Every class has at least one constructor that uses the base class constructor. Create member function show Data() in each to display the info of the class member
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string Name;
    int age;
    string address;

public:
    Person
    {
        // nocode
    }
    Person(string n, int a, string ad)
    {
        Name = n;
        age = a;
        address = ad;
    }

    void showData()
    {
        cout << "The information of the peson is : " << endl;
        cout << "Name = " << Name << "Age = " << age << endl
             << "Address = " << address << endl;
    }
};

class Teacher : public Person
{
private:
    string qualification, department;

public:
    Teacher(string q, string d)
    {
        qualification = q;
        department = d;
    }
    void showData()
    {
        cout << "The information of the teacher  is : " << endl;
        cout << "Qualification = " << qualification << "Department = " << department << endl;
    }
};

class Student : public Person
{
private:
    string program, semester;

public:
    Student(string p, string s)
    {
        program = p;
        semester = s;
    }

    void showData()
    {
        cout << "The information of the student is : " << endl;
        cout << "Program = " << program << endl
             << "semester = " << semester << endl;
    }
};

int main()
{
    Person P("joe", 22, "Manchester");
    Teacher t("Master", "ComputerScience");
    Student s("BE IT", "second ");
    t.Person::showData();
    t.showData();
    s.showData();
}
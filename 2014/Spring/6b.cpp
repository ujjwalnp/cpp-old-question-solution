// Create a class Person with data members Name, Age and Address. Create another class Teacher with data members Qualification and Department. Also create another class Student with data member Program and Semester. Both classes are inherited form the class Person. Every class has at least one constructor which uses base class constructor. Create member function Show Data() in each to display the information of the class member.

#include<iostream>
using namespace std;

class Person {
    private :
        char name[50] = "Ram", address[50] = "ktm";
        int age = 21;
    public:
        Person(){
            cout<<"\nName : "<<name<<"\nAddress : "<<address<<"\nAge : "<<age<<endl;
        }
        void show_data (){
            cout<<"This shows the info of Person Class"<<endl;
        }
};
class Teacher : private Person {
    private:
        char department[50] = "any", qualification[50] = "very high";
    public:
        Teacher () {}
        Teacher (const Person &p);
        void show_data (){
            cout<<"\nDepartment : "<<department<<"\nQualification : "<<qualification<<endl;
        }
};
class Student : private Person {
    private:
        char program[50] = "IT", semester[50] = "first";
    public:
        Student() {}
        Student (const Person &s);
        void show_data (){
            cout<<"\nProgram : "<<program<<"\nSemester : "<<semester<<endl;
        }
};

int main (){
    Person p;

    // p.show_data();
    Teacher t;
    t.show_data();
    Student s;
    s.show_data();

    return 0;
}
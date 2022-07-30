// Create a class called Person with suitable data members to represent their name and age. Use member funtions to initialize and display these information. Derive Student and Employee from the Person classs with their unique features. Initialize objects of these classes using constructor and display the information.

#include<iostream>
using namespace std;

class Person {
    protected :
        char name[50];
        int age;
    
    public :
        Person () {
            name = "Ram";
            age = 50;

        }

};
class Student : private Person {
    private:
        char level[50];
        int roll_no;
        
    public:
        Student() {
            name = "Hari";
            age = 21;
            char level = "Bachelor of Engineering";
            int roll_no = 15;
        }
        void display () {
            cout<<"The informations of the Student are \nName : "<<name<<"\nAge : "<<age<<"\nLevel :"<<level<<"\nRoll Number : "<<roll_no<<endl;
        }
};
class Empolyee : private Person {
    private:
        char department[50];
        int employee_id;
    public:
        Empolyee() {
            name[50] = "Rajaram";
            age = 35;
            department = "IT";

        }
        void display () {
            cout<<"The informations of the Employee are \nName : "<<name<<"\nAge : "<<age<<"\nDepartment :"<<department<<"\nEmployee's Id : "<<employee_id<<endl;
        }
};

int main(){
    Student s;
    s.display();

    Empolyee e;
    e.display();

    return 0;
}
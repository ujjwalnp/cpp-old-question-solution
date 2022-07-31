// WAP to concatenate two strings (name and address of a person) using the concept of containership.

#include<bits/stdc++.h>
using namespace std;

// Class that is to be contained
class FirstClass {
    private : 
        char name[50], address[50];
    
    public : 
        void input() {       // taking input from the user
            cout<<"What is your name ?"<<endl;
            cin>>name;
            cout<<"What is your address ?"<<endl;
            cin>>address;
        }

        string concat () {
            strcat(name, address);
            return name;
        }
        void print(){
            cout<<"Final String = "<<name<<endl;
        }
};

// Container Class
class SecondClass {
    // creating object of FirstClass
    FirstClass f;
    
    public :
        // constructor
        SecondClass () {
            f.input();
            f.concat();
            f.print();
        }
};

int main () {
    SecondClass s;
    return 0;
}
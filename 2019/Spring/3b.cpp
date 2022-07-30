// Wap to input two vector coordinates from the "Base" class and derived class named  "derived" inherits all the properties of base class . derived class must contain a function named add_vector() that add the two vector input form the base class and finally display the result from a function display that is a friend with the base class

#include<iostream>
using namespace std;

// vector co-ordinates let's assume u = (3, 5) & v = (2, 1) 
// then addition will be w = (3+2, 5+1)

// declaration in global scope
int sum_a , sum_b;

class Base {
    protected :
        // vector co-ordinates u= (a1, b1) & v=(a2, b2)
        int a1, b1, a2, b2;

    public:
        void take_input () {
            cout<<"Enter 1st vector's co-ordinated (which is in form of u = (a1, b1) & v = (a2, b2)"<<endl<<"What is a1 ?"<<endl;
            cin>>a1;
            cout<<"what is b1 ?"<<endl;
            cin>>b1;
            cout<<"What is a2 ?"<<endl;
            cin>>a2;
            cout<<"What is b2 ?"<<endl;
            cin>>b2;
        }
        friend void display();
};
class Derived : public Base {
    public :

        void add_vector (){
            sum_a = a1 + a2;
            sum_b = b1 + b2;
        }
};
void display() {
            cout<<"The final result (sum) is : "<<sum_a<<" i + "<<sum_b<<" j"<<endl;
}

int main () {
    Derived d;
    d.take_input();
    d.add_vector();
    display();
    return 0;
}
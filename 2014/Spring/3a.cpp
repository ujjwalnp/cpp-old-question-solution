// Can you derive a Pointer from Base class ? Explain with suitable example.
// Answer : Yes, 



// Example
#include<iostream>
using namespace std;

class Base {
    protected :
        int a = 10;
        int* ptr = &a;

};
class Derived : public Base {
    public :
        void test () {
            cout<< "Pointer found \nAddress : "<<ptr<<"\nValue refer by pointer : "<<*ptr<<endl;
        }
};
int main(){
    Derived d;
    d.test();
    return 0;
}
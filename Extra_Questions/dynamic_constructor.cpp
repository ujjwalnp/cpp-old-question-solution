// WAP to concatenate strings of two objects using the concept of Dynamic Constructor.

#include<iostream>
#include<string.h>
using namespace std;

class DynamicConstructor {
    public :
        string *p;
        DynamicConstructor (string *letter) {
            letter = new string;
            *p = *letter;          
        }
};


int main () {
    string string1 = "First";
    string *ptr1 = &string1;
    string string2 = "Second";
    string *ptr2 = &string2;
    DynamicConstructor d1(ptr1);
    DynamicConstructor d2(ptr2);
    strcat(*d1.p, d2.p)
    string concat = d1.p + d2.p;



    return 0;
}